#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Insert n:";cin >> n;
    int m=1,S=0;
    while((n/m)!=0){
        m*=10;
        if(((n%m)/(m/10))%2==0){S+=((n%m)/(m/10));}
    }
    cout<<S<<endl;
    return 0;
}