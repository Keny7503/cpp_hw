#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Insert n:";cin >> n;
    int m=1,S=1;
    while((n/m)!=0){
        m*=10;
        S*=(n%m)/(m/10);
    }
    cout<<S<<endl;
    return 0;
}