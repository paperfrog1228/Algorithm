#include<stdio.h>
#include<map>
using namespace std;
map<long long,int> prime;
int k,n,count=0,arr[104];
long long heap[1000004],Max=0;
void Push(long long data){
    heap[count]=data;
    int now=count;
    int parent=(count-1)/2;
    while(now>0&&heap[now]<heap[parent]){
        long long temp=heap[now];
        heap[now]=heap[parent];
        heap[parent]=temp;
        now = parent;
        parent=(now-1)/2;
    }
    count++;
}
long long Pop(){
    int now=0,left=1,right=2;
    long long ret=heap[0];
    count--;
    heap[0]=heap[count];
    int target=now;
    while(left<count){
        if(heap[target]>heap[left])
        target=left;
        if(heap[target]>heap[right]&&right<count)
        target=right;
        if(target==now)
            break;
        else{
            long long temp=heap[now];
            heap[now]=heap[target];
            heap[target]=temp;
            now = target;
            left=now*2+1;
            right=now*2+2;
        }
    }
    return ret;
}
int main(){
    scanf("%d %d",&k,&n);
    for(int i=1;i<=k;i++)
    scanf("%d",&arr[i]);
    for(int i=1;i<=k;i++){
        Push(arr[i]);
        prime[arr[i]]++;
    }
    Max=arr[k];
    int cnt=0;
    while(1){
        long long cur=Pop();
        cnt++;
        if(cnt==n){
            printf("%lld",cur);
            return 0;
        }
        for(int i=1;i<=k;i++){
            long long temp=cur*arr[i];
            if(temp>=(long long)2<<31)
            break;
            if(temp>cur*cur)
            break;
            //아 이 코드 덕분에 살았다 진짜 이거 아니였으면 미궁으로 빠졌을 듯
            //이거 생각한놈 진짜 개 천재
            if(count+cnt>n &&Max<temp)
            break;
            if(!prime[temp])
            Push(temp);
            prime[temp]++;
            if(Max<temp)
            Max=temp;
        }
    }
}