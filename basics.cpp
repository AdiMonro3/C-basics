#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter your first number ";
    cin>>a;
    cout<<"enter your second numbr ";
    cin>>b;
    c=a;
    a=b;
    b=c;

    cout<<"after reversing a is "<<a;
    cout<<"\nafter reversing b is "<<b;

    int d=a+b;
    cout<<"\n"<<d;
    return 0;
} 
