#include <iostream>
using namespace std;
int main() {
    int n,x;
    cout<<"Insert x:";cin >> x;
    cout<<"Insert n:";cin >> n;
    n++;
    int T=x,M=1, i=1;
    float S=1;
    while(i<=n){
        S+= (float) T/M;
        T*=x*x;
        M*=(2*i)*(2*i+1);
        i++;
    }
    cout<<"Result: S="<<S<<endl;
    return 0;
}
