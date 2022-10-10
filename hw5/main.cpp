#include <iostream>
using namespace std;
int main() {
    int n, i=0;
    float S=0.0;
    cout<<"Insert n:";cin >> n;
    while(i<=n){
        S+=1.0/(2.0*i+1.0);
        i++;
    }
    cout<<S;
    return 0;
}
