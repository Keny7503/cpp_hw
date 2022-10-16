#include <iostream>
using namespace std;
int main() {
    int n,x;
    cout<<"Insert x:";cin >> x;
    cout<<"Insert n:";cin >> n;
    int T=1,M=1, i=1;
    float S=0;
    while(i<=n){
        T*=x;
        M*=i;
        if(i%2==0){
            S+= (float) T/M;
        }else{
            S-= (float) T/M;
        }
        i++;
    }
    cout<<"Result: S="<<S<<endl;
    return 0;
}