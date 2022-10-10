#include <iostream>
using namespace std;
int main() {
    int n,x, T=1, i=1;
    cout<<"Insert n:";cin >> x >> n;
    while(i<=n){
        T*=x;
        i++;
    }
    cout<<T;
    return 0;
}