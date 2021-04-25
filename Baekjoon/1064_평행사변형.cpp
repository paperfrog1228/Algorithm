#include <bits/stdc++.h>
using namespace std;
double a1,a2,a3,b1,b2,b3;
double Dist(double A1, double B1, double A2, double B2){return sqrt((A1-A2)*(A1-A2)+(B1-B2)*(B1-B2));}
int main(){
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
    double M1 = 1987654321;
    double M2 = 1987654321;
    if(a1!=a2) M1 = abs(b2-b1)/abs(a2-a1);
    if(a2!=a3) M2 = abs(b3-b2)/abs(a3-a2);
    if(M1==M2){
        cout << -1 << '\n';
        return 0;
    }
    double A = Dist(a1,b1,a2,b2); 
    double B = Dist(a1,b1,a3,b3);
    double C = Dist(a2,b2,a3,b3);
    double len1 = 2*(A+B);
    double len2 = 2*(B+C);
    double len3 = 2*(C+A);
    cout<<fixed;
    cout.precision(16);
    cout << max(len1,max(len2,len3)) - min(len1,min(len2,len3)) << '\n';
    return 0;
}
