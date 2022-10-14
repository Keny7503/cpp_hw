#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cout<<"Insert n:";cin >> n;
    int i=2,T=1;
    float S=0;
    while(i<=n){
        T*=i;
        S= pow(T+S,1./i);
        i++;
    }
    cout<<S<<endl;
    return 0;
}