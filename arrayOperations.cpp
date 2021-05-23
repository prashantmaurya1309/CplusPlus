#include<iostream>
using namespace std;
int main()
{
    int A[3],B[3];
    int add[3];
    cout<<"enter elements of A:"<<"\n";
    for(int i =0;i<3;i++)
    {
        cin>>A[i];
    }
    cout<<"enter elements of B:"<<"\n";
    for(int i=0;i<3;i++)
    {
        cin>>B[i];
    }
    cout<<"adding A & B:"<<"\n";
    for(int i =0 ;i<3;i++){
        add[i]=A[i]+B[i];
    }
    cout<<"after addition of A and B:"<<"\n";
    for(int i =0;i<3;i++){
        cout<<add[i]<<" ";
    }
    return 0;
}