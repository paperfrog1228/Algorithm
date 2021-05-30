#include<iostream>
#include<algorithm>
#include<vector>
#include<complex>
using namespace std;
const double PI = acos(-1);
int n;
vector<complex<double>> a,b,c;
long long ans;
void FFT(vector<complex<double>> &f, complex<double> w){
    int n=f.size();
    if(n==1) return;
    vector<complex<double>> even(n/2), odd(n/2);
    for(int i=0;i<n;i++) (i%2?odd:even)[i/2]=f[i];
    FFT(even,w*w);
    FFT(odd,w*w);
    complex<double> wp(1,0);
    for(int i=0;i<n/2;++i){
        f[i]=even[i]+wp*odd[i];
        f[i+n/2]=even[i]-wp*odd[i];
        wp *= w;
    }
}
vector<complex<double>> multiply(vector<complex<double>> a, vector<complex<double>> b){
    int n=1;
    while(n<=a.size()||n<=b.size()) n*=2;
    n*=2;
    a.resize(n);
    b.resize(n);
    vector<complex<double>> c(n);
    complex<double> w(cos(2*PI/n),sin(2*PI/n));
    FFT(a,w);FFT(b,w);
    for(int i=0;i<n;i++) c[i]=a[i]*b[i];
    FFT(c,complex<double>(1,0)/w);
    for(int i = 0; i < n; ++i){
        c[i]/=complex<double>(n,0);
        c[i]=complex<double>(round(c[i].real()),round(c[i].imag()));
    }
    return c;
}
int main(){
    scanf("%d",&n);
    int x;
    for(int i=1;i<=n;i++) scanf("%d",&x), a.push_back(complex<double>(x,0));
    for(int i=0;i<n;i++) a.push_back(a[i]);
    for(int i=1;i<=n;i++) scanf("%d",&x), b.push_back(complex<double>(x,0));
    reverse(b.begin(),b.end());
    c=multiply(a,b);
	for(int i=0;i<c.size();i++)
		ans=max(ans,(long long)round(c[i].real()));
	printf("%lld",ans);
}
