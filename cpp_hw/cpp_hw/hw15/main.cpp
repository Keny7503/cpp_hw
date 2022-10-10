#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Insert n:";cin >> n;
    int T=0, i=1;
    float S=0;
    while(i<=n){
        T+=i;
        S+=1.0/T;
        i++;
    }
    cout<<"Result: S="<<S<<endl;
    return 0;
}
