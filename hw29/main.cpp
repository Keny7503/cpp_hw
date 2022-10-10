#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Insert n:";cin >> n;
    int i=n;
    while(i>0){
        if(n%i==0&&i%2==1){
            cout<<i<<endl;
            break;
        }
        i--;
    }
    return 0;
}
