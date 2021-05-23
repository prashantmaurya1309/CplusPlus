// --------------------------------------------------------------------------------------------- 
//Understand the working of Stack Data structure. Stack is a linear data structure which operates 
//in a LIFO(Last In First Out) or 
// FILO (First In Last Out) pattern.
// It is named stack as it behaves like a real-world stack, for example – a deck of cards or a pile
// of plates, etc.
// Stack is an abstract data type with a bounded (predefined) capacity.
// It is a simple data structure that allows adding and removing elements in a particular order.
// The order may be LIFO(Last In First Out) or FILO(First In Last Out).

// Standard Stack Operations - 
// 1) push() - 
//     Place an item onto the stack. If there is no place for new item, stack is in overflow state.
// 2) pop() -
//     Return the item at the top of the stack and then remove it. If pop is called when stack is
// empty, it is in an underflow state.
// 3) isEmpty() - 
//     Tells if the stack is empty or not
// 4) isfull() - 
//     Tells if the stack is full or not.
// 5) peek() - 
//     Access the item at the i position
// 6) count() -
//     Get the number of items in the stack.
// 7) change() -
//     Change the item at the i position
// 8) display() -
//     Display all items in the stack

#include<iostream>
using namespace std;

class Stack{
    private:
        int top;
        int arr[5];

    public:
        Stack()
        {
            top = -1;
            for (int i=0;i<5;i++)
            {
                arr[i]=0;
            }
        }

        bool isEmpty()
        {
            if(top==-1)
            {
                return true;
            }
            else
                return false;
        }

        bool isFull()
        {
            if(top==4)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        void push(int value)
        {
            if(isFull())
                cout<<"stack is full"<<'\n';

            top++;
            arr[top]=value;    
        }

        int pop()
        {
            if(isEmpty())
            {
                cout<<"stack under flow!!!"<<'\n';
                return 0;
            }
            int temp = arr[top];
            arr[top]=0;
            top--;
            return temp;    
        }

        int count()
        {
            return top+1;
        }

        int peek(int pos)
        {
            if(top < pos)
            {
                cout<<"that postion is empty!!"<<'\n';
                return 0;
            }
            return arr[pos];
        }

        void change(int val,int pos)
        {
            if(top<pos)
            {
                cout<<"that postion is unavailabel"<<'\n';
                
            }
            else
                arr[pos]=val;
        }

        void display()
        {
            for (int i =4;i>=0;i--)
            {
                cout<<arr[i]<<' ';
            }
            cout<<'\n';
        }

};

int main()
{
    Stack s1;
    int option,position,value;

    do
    {
        /* code */
        cout<<"enter option => else select 0 to exit==="<<'\n';
        cout<<"1 for push()"<<'\n';
        cout<<"2 for pop()"<<'\n';
        cout<<"3 for display()"<<'\n';
        cout<<"4 for change()"<<'\n';
        cout<<"5 for peek()"<<'\n';
        cout<<"6 for count()"<<'\n';
        cout<<"7 for isEmpty()"<<'\n';
        cout<<"8 for isFull()"<<'\n';
        cout<<"9 for clearing Screen"<<'\n';

        cin>>option;

        switch (option)
        {
        case 0:
            break;
        case /* constant-expression */1:
            cout<<"enter a value to push"<<'\n';
            cin>>value;
            /* code */s1.push(value);
            break;

        case 2:
            s1.pop();
            break;

        case 3:
            s1.display();
            break;

        case 4:
            cout<<"enter value:"<<'\n';
            cout<<"enter position"<<'\n';
            cin>>value>>position;
            s1.change(value,position)   ;
            break;

        case 9:
            system("cls");
            break;             
        
        default:
            cout<<"wrong input for option!!"<<'\n';
            break;
        }

    } while (option!=0);
    
    return 0;
}