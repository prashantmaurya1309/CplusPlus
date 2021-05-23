// ---------------------------------------------------------------------------------------------
//  Understand the working of a Queue data structure and all its operations. 
// Definition : Queue is a linear data structure which operates in a First IN First OUT or Last IN Last OUT.
// It is named queue as it behaves like a real-world queue, for example – queue(line) of cars in a
//  single lane, queue of people waiting at food counter etc.
// Queue is an abstract data type with a bounded (predefined) capacity.
// It is a simple data structure that allows adding and removing elements in a particular order.
// The order is FIFO(First IN First OUT) or LILO(Last In Last Out).
// Following are the standard operations of Queue DS -
// 1. Enqueue
// 2. Dequeue
// 3. isFull
// 4. isEmpty
// 5. count

#include<iostream>
using namespace std;

class Queue{
    private:
        int front;
        int rear;
        int ar[5];

    public:
        Queue(){
            front =-1;
            rear =-1;
            for(int i =0;i<5;i++)
            {
                ar[i]=0;
            }

        }

        bool isEmpty(){
            if (front == -1 && rear ==-1)
            {
                return true;
            }
            else
                return false;
        }

        bool isFull()
        {
            if(rear == sizeof(ar)-1)
                return true;

            else
                return false;    
        }

        void enQueue(int val)
        {
            if(isFull())
            {
                cout<<"u cant add more in QUEUE as it is FULL!!"<<'\n';
                return;
            }

            if (isEmpty())
            {
                rear = front =0;
                rear++;
                ar[rear]=val;
            }
            else
            {
                rear++;
                ar[rear]=val;
            }
        }

        int deQueue()
        {
            int x =0;
            if(isEmpty())
            {
                cout<<"u r queue is empty!!"<<'\n';
                return x;
            }
            if(front==rear)
            {
                x = ar[front];
                ar[front]=0;
                front =rear = -1;
            }
            else{
                x = ar[front];
                ar[front]=0;
                front++;
            }
            return x;
        }

        void count()
        {
            cout<<(rear-front+1)<<'\n';
        }

        void display()
        {
            if(isEmpty())
            {
                cout<<"queue is empty!!"<<'\n';
                return;
            }
            for (int i = front;i<=(rear-front+1);i++)
            {
                cout<<ar[i]<<' ';
            }
            cout<<'\n';
        }



};

int main()
{
    Queue q1;
    int value,option;
    
    do
    {
        /* code */
        cout<<"enter option => else select 0 to exit==="<<'\n';
        cout<<"1 for enQueue()"<<'\n';
        cout<<"2 for deQueue()"<<'\n';
        cout<<"3 for display()"<<'\n';
        
        
        cout<<"4 for count()"<<'\n';
        cout<<"5 for isEmpty()"<<'\n';
        cout<<"6 for isFull()"<<'\n';
        cout<<"7 for clearing Screen"<<'\n';

        cin>>option;

        switch (option)
        {
        case 0:
            break;
        case /* constant-expression */1:
            cout<<"enter a value to enqueue"<<'\n';
            cin>>value;
            /* code */q1.enQueue(value);
            break;

        case 2:
            q1.deQueue();
            break;

        case 3:
            q1.display();
            break;

        case 4:
            cout<<"count of queue element are:: =>"<<'\n';
            q1.count();
            break;

        case 5:
            cout<<"isEmpty:: =>"<<'\n';
            q1.isEmpty();
            break;

        case 6:
            cout<<"isFull:: =>"<<'\n';
            q1.isFull();
            break;    
        case 7:
            system("cls");
            break;             
        
        default:
            cout<<"wrong input for option!!"<<'\n';
            break;
        }

    } while (option!=0);
    return 0;
}