#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Insert n:";cin >> n;
    int i=1,S=0;
    while((i*i)<=n){
        if((i*i)==n){cout<<n<<" là số chính phương"<<endl;break;}else{
        i++;}
        if(i*i>n){cout<<n<<" không là số chính phương"<<endl;}
    }
    
    return 0;
}