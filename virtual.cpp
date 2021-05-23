#include<iostream>
using namespace std;

class MyBase{
    public:
        void show()
        {
            cout<<"base show"<<'\n';
        }
        virtual void print()
        {
            cout<<"virtual print of BASE"<<'\n';
        }
};

class Derived:public MyBase
{
    public:
        void show(){
            cout<<"show in derived(is not virtual)"<<'\n';
        }
        void print(){
            cout<<"print in derived(is virtual)"<<'\n';
        }
};

int main()
{
    MyBase *basePtr;
    Derived obj;
    basePtr=&obj;
    basePtr->print();
    basePtr->show();
    return 0;
}