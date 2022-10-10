#include <iostream>
using namespace std;
int main() {
    int n, S=0, i=1;
    cout<<"Insert n:";cin >> n;
    while(i<=n){
        S+=i;
        i++;
    }
    cout<<S;
    return 0;
}