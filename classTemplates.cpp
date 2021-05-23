// Templates in C++
// Template is simple and yet very powerful tool in C++
// Templates are the foundation of generic programming, which involves writing code in a way that is independent of any particular type.
// A template is a blueprint or formula for creating a generic class or a function. 
// 2 Types – 
// Function Template
// Class Template

// Class Templates in C++
// Sometimes, you need a class implementation that is same for all classes, only the data types used are different.
// Normally, you would need to create a different class for each data type OR create different member variables and functions within a single class.
// In Class Templates We write a CLASS that can be used for different data types.

// Templates in C++ Theory Article -https://simplesnippets.tech/templates...

#include <iostream>
using namespace std;

template <typename T>
class Weight
{
    private:
        T kg;
    public:
        void setData(T x)
        {
            kg = x;
        }    
        T getData()
        {
            return kg;
        }
};

int main()
{
    Weight<int> w1;
    Weight <float>w2;
    w1.setData(5);
    w2.setData(5.5);
    cout<<"w1 : "<<w1.getData()<<"\n"<<"w2 : "<<w2.getData()<<'\n';
    return 0;
}