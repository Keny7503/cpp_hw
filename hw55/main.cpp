#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Insert n:";cin >> n;
    int i=1,m=10,count=0;
    while((n/m)!=0){
        m*=10;
        i++;
    }
    const int first=((n%m)/(m/10));
    m=1;
    while((n/m)!=0){
        m*=10;
        if((n%m)/(m/10)==first){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}