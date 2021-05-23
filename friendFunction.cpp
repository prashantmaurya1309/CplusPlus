#include<iostream>
using namespace std;

class Distance
{
    private:
        int m;
    public:
        Distance(){
        }    
        Distance(int meter){
            m=meter;
        }
        void displayData(){
            cout<<m<<'\n';
        }

        friend void addTwoValue(Distance &n);
};

void addTwoValue(Distance &n)
{
    n.m = n.m+5;
}

int main(){
    Distance d1(45);
    d1.displayData();
    // calling frien function 
    addTwoValue(d1);//calling by ref hence changes made in function will effect the original values as well
    cout<<"after calling fun^n"<<'\n';
    d1.displayData();
    return 0;
}