#include <iostream>
using namespace std;
int main() {
    int n,x;
    cout<<"Insert x:"; cin >> x ;cout<<"Insert n:";cin >> n;
    int T=x, S=x, i=1;
    while(i<=n){
        T*=x*x;
        S+=T;
        i++;
    }
    cout<<"Result: S="<<S<<endl;
    return 0;
}
