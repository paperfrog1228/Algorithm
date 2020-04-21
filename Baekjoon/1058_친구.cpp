#include<stdio.h>
#include<vector>
int n,g[55][55],max=0;
char s[55];
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%s",s);
        int j=0;
        while(s[j]!='\0'){
            if(s[j]=='Y'&&i!=j+1){
                g[i][j+1]=1;
                g[j+1][i]=1;
            }
            j++;
        }
    }
    for(int i=1;i<=n;i++){
        std::vector<int> list;
        for(int j=1;j<=n;j++){
            if(g[i][j]==1&&i!=j){
                for(int k=0;k<list.size();k++){
                    if(g[list[k]][j]==1)
                    continue;
                    g[list[k]][j]=2;
                    g[j][list[k]]=2;
                }
                list.push_back(j);
            }
        }
    }
    for(int i=1;i<=n;i++){
        int cnt=0;
        for(int j=1;j<=n;j++)
        if(g[i][j])
        cnt++;
        if(max<cnt)
        max=cnt;
    }
    printf("%d",max);
}