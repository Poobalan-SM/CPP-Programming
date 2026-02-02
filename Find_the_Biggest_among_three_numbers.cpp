//Program to find the Biggest among three numbers
#include<iostream>
using namespace std; 
int main() 
{ 
    int a,b,c;
    cout<<"Enter the First number: ";
    cin>>a;
    cout<<"Enter the Second number: ";
    cin>>b;
    cout<<"Enter the Third number: ";
    cin>>c;
    if(a>=b)
        if(a>=c) 
            cout<<a<<" is the Biggest number";
        else
            cout<<c<<" is the Biggest number"; 
    else
        if(b>=c) 
            cout<<b<<" is the Biggest number"; 
        else
            cout<<c<<" is the Biggest number"; 
    return 0; 
} 
