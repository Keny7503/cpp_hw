#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Insert n:";cin >> n;
    int i=1,S=0;
    while(i<n){
        if(n%i==0){
            S+=i;
        }
        i++;
    }
    if(S==n){cout<<n<<" là số hoàn thiện"<<endl;}
    else{cout<<n<<" không là số hoàn thiện"<<endl;}
    return 0;
}