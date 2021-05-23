#include<iostream>
using namespace std;

//BASE CLASS
class Shape{
    protected:
        int height;
        int width;
    public:
        void setWidth(int w)
        {
            width = w;
        }
        void setHeight(int h)
        {
            height = h;
        }
};

// derived class
class Rectangle:public Shape
{
    public:
        int getArea()
        {
            return height*width;
        }

};
int main()
{
    Rectangle r;
    r.setHeight(6);
    r.setWidth(5);
    cout<<r.getArea()<<" is area of given rectangle :)"<<'\n';
    return 0;
}