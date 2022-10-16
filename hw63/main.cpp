#include <iostream>
using namespace std;
int main() {
    int a,b,i,Min;
    cout<<"Insert a:";cin >> a;
    cout<<"Insert b:";cin >> b;
    Min=a*b;
    i=Min;
    while(i>=a&&i>=b){
        if(i%a==0&&i%b==0&&i<Min){
            Min=i;
        }
        i--;
    }
    cout<<Min<<endl;
    return 0;
}