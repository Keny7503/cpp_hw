#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Insert n:";cin >> n;
    int m=1,Min=9,count=0;
    while((n/m)!=0){
        m*=10;
        if((n%m)/(m/10)<Min){
            Min=(n%m)/(m/10);
        }
    }
    m=1;
    while((n/m)!=0){
        m*=10;
        if((n%m)/(m/10)==Min){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}