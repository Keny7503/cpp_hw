#include <iostream>
using namespace std;
int main() {
    int n,x,T=1, S=0, i=1;
    cout<<"Insert x:";cin >> x;
    cout<<"Insert n:";cin >> n;
    while(i<=n){
        T*=x;
        if(i%2==1){
            S+=T;
        }else{
            S-=T;
        }
        i++;
    }
    cout<<S;
    return 0;
}