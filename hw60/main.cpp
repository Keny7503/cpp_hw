#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Insert n:";cin >> n;
    int m=1,hold=9;
    bool acending = true;
    while((n/m)!=0){
        m*=10;
        if(((n%m)/(m/10))>hold){
            acending=false;
            break;
        }else{
            hold=((n%m)/(m/10));
        }
    }
    if(acending==true){
        cout<<n<<" tăng dần từ phải sang trái"<<endl;
    }else{
        cout<<n<<" không tăng dần từ phải sang trái"<<endl;
    }
    return 0;
}