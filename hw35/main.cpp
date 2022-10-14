#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cout<<"Insert n:";cin >> n;
    int i=1;
    float S=0;
    while(i<=n){
        S= sqrt((n+1-i)+S);
        i++;
    }
    cout<<S<<endl;
    return 0;
}