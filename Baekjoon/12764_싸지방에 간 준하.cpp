#include<stdio.h>
struct Navy{int start;int end;int com;};
Navy a[100004],t[100004],q[100004];
int n,count,count2,com[100004],com_i=0,q2[100004];
void Merge(int l,int m,int r){
    int i=l,j=m+1,k=l;
    while(i<=m&&j<=r)
    if(a[i].start<a[j].start)
        t[k++]=a[i++];
    else
        t[k++]=a[j++];
    for(;i<=m;i++)
        t[k++]=a[i];
    for(;j<=r;j++)
        t[k++]=a[j];
    for(int x=l;x<=r;x++)
        a[x]=t[x];
}
void MergeSort(int l,int r){
    if(r<=l) return;
    int mid=(r+l)/2;
    MergeSort(l,mid);
    MergeSort(mid+1,r);
    Merge(l,mid,r);
}
void Push(Navy navy){
    q[++count]=navy;
    int now=count,parent=now/2;
    while(q[now].end<q[parent].end&&parent>0){
        Navy temp=q[now];
        q[now]=q[parent];
        q[parent]=temp;
        now=parent;
        parent=now/2;
    }
}
Navy Pop(){
    Navy ret = q[1];
    q[1]=q[count--];
    int now=1,left=2,right=3,target=now;
    while(left<=count){
        if(q[target].end>q[left].end)
            target=left;
        if(q[target].end>q[right].end&&right<=count)
            target=right;
        if(target==now)
            break;
        Navy temp=q[target];
        q[target]=q[now];
        q[now]=temp;
        now=target,left=now*2,right=now*2+1;
    }
    return ret;
}
void Push2(int com){
    q2[++count2]=com;
    int now=count2,parent=now/2;
    while(q2[now]<q2[parent]&&parent>0){
        int temp=q2[now];
        q2[now]=q2[parent];
        q2[parent]=temp;
        now=parent;
        parent=now/2;
    }
}
int Pop2(){
    int ret = q2[1];
    q2[1]=q2[count2--];
    int now=1,left=2,right=3,target=now;
    while(left<=count2){
        if(q2[target]>q2[left])
            target=left;
        if(q2[target]>q2[right]&&right<=count2)
            target=right;
        if(target==now)
            break;
        int temp=q2[target];
        q2[target]=q2[now];
        q2[now]=temp;
        now=target,left=now*2,right=now*2+1;
    }
    return ret;
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    scanf("%d %d",&a[i].start,&a[i].end);
    MergeSort(1,n);
    for(int i=1;i<=n;i++){
        while(count>0&&a[i].start>q[1].end)
            Push2(Pop().com);
        int c;
        if(count2==0)
        c=++com_i;
        else
        c=Pop2();
        Push({a[i].start,a[i].end,c});
        com[c]++;         
    }
    printf("%d\n",com_i);
    for(int i=1;i<=com_i;i++)
    printf("%d ",com[i]);
}