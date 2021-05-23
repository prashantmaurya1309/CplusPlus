#include<iostream>
using namespace std;

void passByValue(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<b<<'\n';
};

void passByRefernce(int &x, int &y)// we are just refrencing the original value of a and b with x and yie 
{
    int z=x;
    x=y;
    y=z;
    cout<<x<<" "<<y<<'\n';
};

void passByAdderess(int *x,int *y)
{
    int z=*x;
    *x=*y;
    *y=z;
    cout<<*x<<*y<<'\n';
};


int main()
{
    int a=34,b=45;
    cout<<"original value "<<a<<" "<<b<<'\n';
    passByValue(a,b);
    cout<<"after by value "<<a<<" "<<b<<'\n';
    passByRefernce(a,b);
    cout<<"after by ref "<<a<<" "<<b<<'\n';
    passByAdderess(&a,&b);
    cout<<"after address "<<a<<" "<<b<<'\n';
    return 0;
}