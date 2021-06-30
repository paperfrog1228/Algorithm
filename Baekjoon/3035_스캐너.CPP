#include <stdio.h>
int r,c,zr,zc;
char s[55][55],ans[550][550];
int main(){
	scanf("%d %d %d %d",&r,&c,&zr,&zc);
    for(int i=0;i<r;i++)scanf("%s",s[i]);    
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++){
        for(int a=i*zr;a<(i+1)*zr;a++)
        for(int b=j*zc;b<(j+1)*zc;b++)
            ans[a][b]=s[i][j];
    }
    for(int i=0;i<zr*r;i++) printf("%s\n",ans[i]);
}