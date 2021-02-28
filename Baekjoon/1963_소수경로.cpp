#include<iostream>
#include<queue>
#include<string>
#include<bitset>
#include<cstdlib>
using namespace std;
bitset<10010> bs;
int t;
void solution(){
    int a,b,now,v[10010],ans=1;
    for(int i=0;i<10010;i++) v[i]=0;
    queue<int> q1,q2;
    scanf("%d %d", &a, &b);
    if(a==b) {printf("0\n"); return;}
    q1.push(a);
    while(!q1.empty()) {
        while (!q1.empty()) {
            now = q1.front();
            q1.pop();
            for (int i = 0; i < 4; i++) {
                string s = to_string(now);
                for (int j = 0; j <= 9; j++) {
                    s[i] = j + '0';
                    int check = atoi(s.c_str());
                    if (check == b) {
                        printf("%d\n", ans);
                        return;
                    }
                    if (check < 1000 || bs[check] == 0 || v[check]) continue;
                    v[check]++;
                    q2.push(check);
                }
            }
        }
        ans++;
        swap(q1, q2);
    }
    printf("-1\n");

}
int main() {
    bs.set();
    bs[0] = bs[1] = 1;
    for (int i = 2; i <= 4000; i++) {
        if (bs[i] == 0) continue;
        for (int j = i * i; j <= 10000; j += i)
            bs[j] = 0;
    }
    scanf("%d",&t);
    while(t--) solution();
}
