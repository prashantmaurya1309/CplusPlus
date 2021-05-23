#include<iostream>
using namespace std;

int add(int a,int b){
    return (a+b);
}
// if user input double or any other datatyhpe  then we use overloading 
double add(double a, double b)
{
    return (a+b);
}

string add(char a,char b){
    char c[2];
    c[0]=a;
    c[1]=b;
    return c;
}

int main(){
    cout<<"this ur add: "<<add(4,5)<<'\n';
    cout<<"add ing char: "<<add('p','m');
    return 0;
}