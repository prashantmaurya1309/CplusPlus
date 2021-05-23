#include<iostream>
using namespace std;
int main(){

    int* ptr;
    int size;
    cout<<"enter size:"<<"\n";
    cin>>size;

    ptr = new int[size];

    cout<<"enter "<<size<<" numbers:"<<'\n';
    for(int i=0;i<size;i++)
    {
        cin>>ptr[i];
    }
    for(int i=0;i<size;i++)
    {
        cout<<" "<<ptr[i]<<" ";
    }
    return 0;

}