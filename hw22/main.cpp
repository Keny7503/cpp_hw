#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Insert n:";cin >> n;
    int i=1,S=1;
    while(i<=n){
        if(n%i==0){
            S*=i;
        }
        i++;
    }
    cout<<S<<endl;
    return 0;
}
