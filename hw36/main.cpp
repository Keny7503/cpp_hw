#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cout<<"Insert n:";cin >> n;
    int i=1,T=1;
    float S=0;
    while(i<=n){
        T*=i;
        S= sqrt(T+S);
        i++;
    }
    cout<<S<<endl;
    return 0;
}