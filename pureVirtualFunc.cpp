// Pure Virtual Functions in c++ 
// Sometimes implementation of all function cannot be provided in a base class because we don’t know the implementation. Such a class is called abstract class.
// A pure virtual function (or abstract function) in C++ is a virtual function for which we don’t have implementation, we only declare it. A pure virtual function is declared by assigning 0 in declaration. 
// Some important facts – 
// A class is abstract if it has at least one pure virtual function.
// We can have pointers and references of abstract class type.
// If we do not override the pure virtual function in derived class, then derived class also becomes abstract class.
// Abstract classes cannot be instantiated. 

#include<iostream>
using namespace std;

class Shape
{
    public:
        virtual void getArea()
        {
            cout<<"we can't determine the area of unknown shape"<<'\n';
        }

};

class Circle:public Shape
{
    public:
        int radius;
        void getArea()
        {
            cout<<"enter radius: "<<'\n';
            cin>>radius;
            cout<<"area of circle:"<<3.14*radius<<'\n';
        }
};


int main()
{
    Circle c;
    c.getArea();
    return 0;
}