#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Insert n:";cin >> n;
    int i=1,m=1;
    bool op =true;
    while((n/m)!=0){
        m*=10;
    }
    int numCountDex= m;
    m=1;
    while((n/m)!=0){
        m*=10;
        if(((n%m)/(m/10))!=((n%numCountDex)/(numCountDex/10))){
            op = false;
            break;
        }
        numCountDex/=10;
    }
    if(op){
        cout<<n<<" là số đối xứng"<<endl;
    }else{
        cout<<n<<" không là số đối xứng"<<endl;
    }
    return 0;
}