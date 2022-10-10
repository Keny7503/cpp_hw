#include <iostream>
using namespace std;
int main() {
    int n, i=1;
    float S=0;
    cout<<"Insert n:";cin >> n;
    while(i<=n){
        S+=1.0/i;
        i++;
    }
    cout<<S;
    return 0;
}