#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char ar[100];
    cout<<"enter u'r name and age: "<<'\n';
    cin.getline(ar,100);
    
    ofstream myFile("xyz.txt",ios::app);  // for file WRITE operation we use ofstream
    if(myFile.is_open())
    {
        myFile<<ar;
    }
    else
    {
        cout<<"file is NOT OPEN"<<'\n';
        
    }
    myFile.close();
    cout<<"file operation WRITE success";

    ifstream obj("xyz.txt");
    cout<<'\n'<<"opening file in reading mode"<<'\n';
    char ar1[100];
    obj.getline(ar1,100);
    cout<<"array content: "<<'\n'<<ar1<<'\n';
    obj.close();
    cout<<'file read operation is closed';



    return 0;
}