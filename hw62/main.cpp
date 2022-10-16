#include <iostream>
using namespace std;
int main() {
    int a,b,i=1,Min=1;
    cout<<"Insert a:";cin >> a;
    cout<<"Insert b:";cin >> b;
    while(i<=a&&i<=b){
        if(a%i==0&&b%i==0&&i>Min){
            Min=i;
        }
        i++;
    }
    cout<<Min<<endl;
    return 0;
}