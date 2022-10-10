#include <iostream>
using namespace std;
int main() {
    int n,x;
    cout<<"Insert x:";cin >> x;
    cout<<"Insert n:";cin >> n;
    int T=0,M=1, i=1;
    float S=0;
    while(i<=n){
        T+=i;
        M*=x;
        S+= (float) M/T;
        i++;
    }
    cout<<"Result: S="<<S<<endl;
    return 0;
}
