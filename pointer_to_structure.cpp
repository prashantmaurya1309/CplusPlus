#include<iostream>
using namespace std;
#include<string>

struct pointer_to_structure
{
    /* data */
    string name;
    int age;
    double salary;
};

int main()
{
    
    pointer_to_structure p1;
    cout<<"enter details of p1:  "<<'\n';
    cin>>p1.name;
    cin>>p1.age;
    cin>>p1.salary;


    cout<<"entersed details of p1 are ::"<<'\n';
    cout<<p1.name<<" "<<p1.age<<" "<<p1.salary;

    pointer_to_structure *ptr;
    ptr=&p1;

    cout<<'\n'<<"details of p1 using pointer are:"<<'\n';
    cout<<ptr->name<<' ';
    cout<<ptr->age<<' ';
    cout<<ptr->salary<<' ';


    return 0;
}
