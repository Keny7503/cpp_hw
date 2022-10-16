#include <iostream>
#include<math.h>
using namespace std;
int main() {
    int a,b,c;
    cout<<"Insert a:";cin >> a;
    cout<<"Insert b:";cin >> b;
    cout<<"Insert c:";cin >> c;
    const float delta =(b*b)-(4*a*c);
    float x1,x2,x3,x4,sX1,sX2;
    bool noRoot =false;
    if(delta<0){
        noRoot=true;
    }else if (delta==0){
        sX1=((float)-b)/(2*a);
        sX2=sX1;
    }else{
        sX1= (-b+sqrt(delta))/(2*a);
        sX2= (-b-sqrt(delta))/(2*a);
    }
    if((noRoot==true)||(sX1<0&&sX2<0)){
        cout<<"The equation has no solution"<<endl;
    }else{
        cout<<"Solution set:{";
        if(sX1>0){
            cout<<sqrt(sX1)<<";";
            cout<<-sqrt(sX1)<<";";
        }else if(sX1==0){
            cout<<0<<";";
        }else{}
        if(sX2>0&&sX1!=sX2){
            cout<<sqrt(sX2)<<";";
            cout<<-sqrt(sX2)<<";";
        }else if(sX1==0&&sX1!=sX2){
            cout<<0<<";";
        }else{}
    }
    cout<<"}"<<endl;
    return 0;
}