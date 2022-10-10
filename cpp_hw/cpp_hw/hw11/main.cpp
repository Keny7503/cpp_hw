#include <iostream>
using namespace std;
int main() {
    int n, S=0, i=1, T=1;
    cout<<"Insert n:";cin >> n;
    while(i<=n){
        T*=i;
        S+=T;
        i++;
    }
    cout<<S;
    return 0;
}