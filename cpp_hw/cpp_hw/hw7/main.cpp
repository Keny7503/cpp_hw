#include <iostream>
using namespace std;
int main() {
    int n, i=1;
    float S=0.0;
    cout<<"Insert n:";cin >> n;
    while(i<=n){
        S+=i/(i+1.0);
        i++;
    }
    cout<<S;
    return 0;
}