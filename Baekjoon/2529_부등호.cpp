#include<stdio.h>
int k,max[13],tmax=9,cur_max=-1,min[13],tmin=0,cur_min=-1;
char c[12];
int main(){
    scanf("%d\n",&k);
    for(int i=1;i<=k;i++)
        scanf(" %c",&c[i]);
    for(int i=1;i<=k;i++){
        int cnt_max=0,cnt_min=0;
        if(c[i]=='<'){
            for(int j=i+1;(c[j]!='>'&&j<=k);j++)
                cnt_max++;
            max[i]=-cnt_max+tmax-1;
            if(cur_max==-1)
            cur_max=max[i];
            min[i]=tmin;
            if(cur_min!=-1){
            tmin=++cur_min;
            cur_min=-1;
            }
            else
            tmin++;
        }
        else {
            for(int j=i+1;(c[j]!='<'&&j<=k);j++)
                cnt_min++;
            min[i]=cnt_min+tmin+1;
            if(cur_min==-1)
            cur_min=min[i];
            max[i]=tmax;
            if(cur_max!=-1){
            tmax=--cur_max;
            cur_max=-1;
            }
            else
            tmax--;
        }
    }
    max[k+1]=tmax;
    min[k+1]=tmin;
    for(int i=1;i<=k+1;i++)
    printf("%d",max[i]);
    printf("\n");
    for(int i=1;i<=k+1;i++)
    printf("%d",min[i]);
}