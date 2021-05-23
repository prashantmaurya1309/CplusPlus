#include<iostream>
using namespace std;

int maximum(int a,int b); // signaturem of function or forward declaration

int main()
{
    int a,b;
    cout<<"enter a,b:";
    cin>>a>>b;

    int c=maximum(a,b);
    cout<<"\n"<<"max of a,b: "<<c;
    return 0;
}
int maximum(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}