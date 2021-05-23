#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter num:";
    cin>>num;

    switch (num)
    {
    case 1/* constant-expression */:
        /* code */
        cout<<"monday";
        break;
    
    case 2/* constant-expression */:
        /* code */
        cout<<"tuesday";
        break;

        
    case 3/* constant-expression */:
        /* code */
        cout<<"wednesday";
        break;

        
    case 4/* constant-expression */:
        /* code */
        cout<<"thursday";
        break;

        
    case 5/* constant-expression */:
        /* code */
        cout<<"friday";
        break;

    default:
        cout<<"enter valid working day:";

        break;
    }

    return 0;
}