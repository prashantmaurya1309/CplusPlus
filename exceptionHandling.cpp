#include<iostream>
using namespace std;
int main()
{
    int numerator,denominator,result=0;
    cout<<"enter 2 no.:"<<'\n';
    cin>>numerator>>denominator;

    try
    {
        if(denominator == 0)
        {
            throw denominator;
        }
        result = numerator/denominator;
    }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    catch(int ex)
    {
        cout<<"exception : divde by zero not allowed..."<<ex;

    }
    cout<<"result is:"<<result;
    return 0;
    
}