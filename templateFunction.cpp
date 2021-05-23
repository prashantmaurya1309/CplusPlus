// template functions in C++ programming language. We will understand the concept of templates in c++ and templates for generic programming in c++
// Then we will extensively cover Function Templates in C++ Programming and see a template function program example in Dev C++

// Templates in C++
// Template is simple and yet very powerful tool in C++
// Templates are the foundation of generic programming, which involves writing code in a way that is independent of any particular type.
// A template is a blueprint or formula for creating a generic class or a function. 
// 2 Types – 
// Function Template
// Class Template

// Function Templates in C++
// Function templates are special functions that can operate with generic types. 
// This allows us to create a function template whose functionality can be adapted to more than one type or class without repeating the entire code for each type.
// The simple idea is to pass data type as a parameter so that we don’t need to write same code for different data types.
// We write a generic function that can be used for different data types.

// Templates in C++ Theory Article - https://simplesnippets.tech/templates...


#include<iostream>
using namespace std;
/*
int add(int x,int y)
{
    return x+y;
}

float add(float x,float y)
{
    return x+y;
}
double add(double x,double y)
{
    return x+y;
}
*/

template <typename T>
T add(T x,T y)
{
    return x+y;
}

template <typename T,typename U>
U multiplication(T x,U y)
{
    return x*y;
}

int main()
{
    cout<<"addition using template in int: "<<add<int>(3,4)<<'\n';
    cout<<"addition using template in float: "<<add<float>(3.5f,4.5f)<<'\n';
    cout<<"addition using template in double: "<<add<double>(3.5,4)<<'\n';
    cout<<"mul using template in: "<<multiplication<int,float>(3,4.5f)<<'\n';
    return 0;
}