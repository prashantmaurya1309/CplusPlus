// --------------------------------------------------------------------------------------------- 
// A circular queue data structure is a type of queue data structure which
//  overcomes the drawback of simple queue data structure. 
// In simple queue data structure, as values are dequeued from the front side, they become 
// in-accessible according the standard algorithm.
// However, in circular queue data structure, those inaccessible memory locations can be accessed 
// again since the the rear and front pointer revolved and iterate through the index positions of the queue.

#include<iostream>
using namespace std;

class CircularQueue{
    private:
        int front;
        int rear;
        int ar[5];
        int itemCount;

    public:
        CircularQueue(){
            front =-1;
            rear =-1;
            itemCount=0;
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
            if((rear+1)%5 == front) 
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
                
                ar[rear]=val;
            }
            else
            {
                rear = (rear+1)%5;
                ar[rear]=val;
            }
            itemCount++;
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
                itemCount--;
            }
            else{
                x = ar[front];
                ar[front] = 0;
                front = (front+1)%5;
                itemCount--;
            }
            return x;
        }

        void count()
        {
            cout<<itemCount<<'\n';
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
    CircularQueue q1;
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
            if(q1.isEmpty())
            {
                cout<<"yes it is empty"<<"\n";
            }
            else
                cout<<"not yet"<<"\n";
            break;

        case 6:
            cout<<"isFull:: =>"<<'\n';
            if(q1.isFull())
            {
                cout<<"yes queue is full now"<<'\n';
            }
            else
                cout<<"not yet"<<'\n';
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