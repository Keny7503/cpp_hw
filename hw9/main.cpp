#include <iostream>
using namespace std;
int main() {
    int n, T=1, i=1;
    cout<<"Insert n:";cin >> n;
    while(i<=n){
        T*=i;
        i++;
    }
    cout<<T;
    return 0;
}