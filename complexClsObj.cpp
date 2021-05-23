#include<iostream>
using namespace std;

class ComplexNumber
{
    private:
    int real;
    float img;

    public:
        ComplexNumber(){

        }
        ComplexNumber(int r,float i)
        {
            real=r;
            img=i;
        }
        void displayData()
        {
            cout<<real<<" + i"<<img<<'\n';
        }

        int getRealPart()
        {
            return real;
        }
        float getImaginayPart()
        {
            return img;
        }

};

ComplexNumber add2Number(ComplexNumber c1,ComplexNumber c2)
{
    int r;
    float i;
    r=c1.getRealPart() + c2.getRealPart();
    i = c1.getImaginayPart() + c2.getImaginayPart();
    return ComplexNumber(r,i);
}

int main()
{
    ComplexNumber c1(3,4.5),c2(2,5.5),c3;
    c1.displayData();
    c2.displayData();
    c3 = add2Number(c1,c2);
    c3.displayData();
    ComplexNumber *ptr;
    ptr = &c3;
    ptr->displayData();
    cout<<ptr<<'\n';
    return 0;
}