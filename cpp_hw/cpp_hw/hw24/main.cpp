#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Insert n:";cin >> n;
    int i=1;
    while(i<=n){
        if(n%i==0&&i%2==1){
            cout<<i<<endl;
        }
        i++;
    }
    return 0;
}
