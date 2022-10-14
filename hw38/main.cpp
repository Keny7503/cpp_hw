#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cout<<"Insert n:";cin >> n;
    int i=1;
    float S=0;
    while(i<=n){
        S= pow(i+S,1./(i+1));
        i++;
    }
    cout<<S<<endl;
    return 0;
}