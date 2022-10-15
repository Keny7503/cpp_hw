#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Insert n:";cin >> n;
    int m=1,S=1,r=0;
    while((n/m)!=0){
        m*=10;
    }
    S=m;
    while(m>=10){
        r+=((n%m)/(m/10)*(S/m));
        m/=10;
    }
    
    cout<<r<<endl;
    return 0;
}