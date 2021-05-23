#include<iostream>
#include<string>
// WE AREN'T USING "using namespae std;" hence we need to use std:: cout/cin/string in further code
struct Pearson
{
    /* data */
    std:: string name;
    int age;
    double salary;
};

int main()
{
    Pearson p[2];
    std::cout<<"enter 2 person detail: "<<"\n";
    for(int i=0;i<2;i++)
    {
        std::cin>>p[i].name;
        std::cin>>p[i].age;
        std::cin>>p[i].salary;
    }
    std::cout<<"\n"<<"personn arry:::";
    for (int i=0;i<2;i++)
    {
        std::cout<<'\n'<<p[i].name;
        std::cout<<'\n'<<p[i].age;
        std::cout<<'\n'<<p[i].salary;
    }
    return 0;
}
