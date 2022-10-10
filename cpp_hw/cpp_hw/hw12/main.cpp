#include <iostream>
using namespace std;
int main() {
    int n,x,T=1, S=0, i=1;
    cout<<"Insert n:";cin >> x >> n;
    while(i<=n){
        T*=x;
        S+=T;
        i++;
    }
    cout<<S;
    return 0;
}
