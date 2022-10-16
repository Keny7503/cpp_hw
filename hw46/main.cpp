#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Insert n:";cin >> n;
    int m=1,i=0;
    while((n/m)!=0){
        m*=10;
        if(((n%m)/(m/10))%2==1){i++;}
    }
    cout<<i<<endl;
    return 0;
}