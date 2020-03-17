#include<stdio.h>
#include<vector>
using namespace std;
vector<int> even,odd;
void TestCase(){
    even.clear();
    odd.clear();
    bool is_even[105];
    int n,temp;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&temp);
        if(temp%2==0){
            even.push_back(temp);
            is_even[i]=1;
        }
        else{
            odd.push_back(temp);
            is_even[i]=0;
        }
    }
    if(even.size()>=1)
        printf("1\n");
    for(int i=1;i<=n;i++)
        if(is_even[i]==1){
            printf("%d\n",i);
            return;
        }   
    int cnt=0;
    if(odd.size()>=2){
        printf("2\n");
        for(int i=1;i<=n;i++){
            if(is_even[i]==0){
                cnt++;
                printf("%d ",i);
                if(cnt==2){
                    printf("\n");
                    return;
                }
            }
        }
    }
    printf("-1\n");
}
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    TestCase();
}