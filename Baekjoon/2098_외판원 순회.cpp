#include <stdio.h>
int N,w[18][18],dp[66000][18];
int TSP(int bit,int n){
    bit|=(1<<(n-1));
    if(bit==(1<<N)-1){
        if(w[n][1]>0)
		    return w[n][1];
        else return 160000005;
    }
    int& ret=dp[bit][n];
	if(ret>0)
	return ret;
	ret=160000005;
	for (int i=1;i<=N;i++){
		if ((bit&(1<<(i-1)))==0&&w[n][i]>0){
			int temp=TSP(bit,i)+w[n][i];
			if (ret>temp)
				ret=temp;
		}
	}
    return ret;
}
int main(){
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    for(int j=1;j<=N;j++)
    scanf("%d",&w[i][j]);
    printf("%d",TSP(0,1));
}