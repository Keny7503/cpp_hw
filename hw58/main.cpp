#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Insert n:";cin >> n;
    int m=1;
    bool allEven = true;
    while((n/m)!=0){
        m*=10;
        if(((n%m)/(m/10))%2==1){
            allEven=false;
            break;
        };
    }
    if(allEven==true){
        cout<<n<<" có toàn chữ số chẵn"<<endl;
    }else{
        cout<<n<<" không toàn chữ số chẵn"<<endl;
    }
    return 0;
}