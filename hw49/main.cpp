#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Insert n:";cin >> n;
    int i=1,m=10;
    while((n/m)!=0){
        m*=10;
        i++;
    }
    cout<<((n%m)/(m/10))<<endl;
    return 0;
}