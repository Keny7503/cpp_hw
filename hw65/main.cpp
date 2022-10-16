#include <iostream>
#include<math.h>
using namespace std;
int main() {
    int a,b,c;
    cout<<"Insert a:";cin >> a;
    cout<<"Insert b:";cin >> b;
    cout<<"Insert c:";cin >> c;
    const float delta =(b*b)-(4*a*c);
    float x1,x2;
    if(delta<0){
        cout<<"The equation has no solution"<<endl;
    }else if (delta==0){
        x1=((float)-b)/(2*a);
        cout<<"x1=x2 "<<x1<<endl;
    }else{
        x1= (-b+sqrt(delta))/(2*a);
        x2= (-b-sqrt(delta))/(2*a);
        cout<<"x1= "<<x1<<endl;
        cout<<"x2= "<<x2<<endl;
    }
    return 0;
}