#include<stdio.h>
int input,n,a[100005],count,now,parent,temp,left,right,target;
void Push(int b){
    count++;
    now=count;
    parent=count/2;
    a[count]=b;
    while(a[now]>a[parent]&&parent>0){
        temp=a[now];
        a[now]=a[parent];
        a[parent]=temp;
        now=parent;
        parent=now/2;
    }
}
int Pop(){
    if(count<=0)
    return 0;
    int ret=a[1];
    a[1]=a[count];
    now=1;
    left=2;right=3;
    target=now;
    count--;
    while(left<=count){
        if(a[target]<a[left])
        target=left;
        if(a[target]<a[right]&&right<=count)
        target=right;
        if(target==now)
        break;
        temp=a[now];
        a[now]=a[target];
        a[target]=temp;
        now=target;
        left=now*2;
        right=now*2+1;
    }
    return ret;
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&input);
        if(input==0)
        printf("%d\n",Pop());
        else
        Push(input);
    }
}