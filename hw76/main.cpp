#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, i=1,tem=1;
    cout<<"Insert n:";cin >> n;
    bool check= false;
    while(tem<=n){
        if(tem==n){
          cout<<n<<" has the fomular of 3^k";
          check= true;
          break;  
        }
        tem*=3;
    }
    if(check==false){
        cout<<n<<" doesn't have the fomular of 3^k";
    }
    return 0;
}