#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Insert n:";cin >> n;
    int i=1,S=0;
    while(S<n){
        S+=i;
        i++;
    }
    cout<<i-2<<endl;
    return 0;
}