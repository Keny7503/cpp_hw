#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Insert n:";cin >> n;
    int i=1,S=0;
    while(i<n){
        if(n%i==0&&i!=1){
            cout<<n<<" không là số nguyên tố"<<endl;
            break;
        }else{
            i++;
            if(i>=n){
            cout<<n<<" là số nguyên tố"<<endl;
        }
        }
        
    }
    return 0;
}