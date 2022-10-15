#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Insert n:";cin >> n;
    int m=1,Max=0,count=0;
    while((n/m)!=0){
        m*=10;
        if((n%m)/(m/10)>Max){
            Max=(n%m)/(m/10);
        }
    }
    m=1;
    while((n/m)!=0){
        m*=10;
        if((n%m)/(m/10)==Max){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}