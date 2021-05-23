#include<iostream>
using namespace std;
int main()
{
    int *ip;
    double *dp;
    float *fp;
    char *cp;

    int var = 5;
    ip=&var;

    cout<<"var:"<<var<<'\n'<<"*p:"<<*ip<<'\n'<<"p:"<<ip;

    *ip=7;
    cout<<"\n"<<var:"<<var<<'\n'<<"*p:"<<*ip<<'\n'<<"p:"<<ip;
    return 0;
}