#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Insert n:";cin >> n;
    int m=1;
    bool allOld = true;
    while((n/m)!=0){
        m*=10;
        if(((n%m)/(m/10))%2==0){
            allOld=false;
            break;
        };
    }
    if(allOld==true){
        cout<<n<<" có toàn chữ số lẽ"<<endl;
    }else{
        cout<<n<<" không toàn chữ số lẽ"<<endl;
    }
    return 0;
}