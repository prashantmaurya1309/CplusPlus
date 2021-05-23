#include<iostream>
using namespace std;

class Node{
    public:
        int key;
        int data;
        Node *next;

        Node(){
            key = 0;
            data = 0;
            next = NULL;
        }

        Node(int k, int d){
            this->key = k;
            this->data = d;
        }
};

class SinglyLinkedList{
    public:
        Node *head;

        // constructor
        SinglyLinkedList(){
            head = NULL;
        }

        // parameterized constructor
        SinglyLinkedList(Node *n){
            head = n;
        }

        // check the node if it alreay exists
        Node* nodeExists(int k){
            Node *temp = NULL;
            Node *ptr = head;
            while(ptr!=NULL){
                if(ptr->key == k)
                {
                    temp = ptr;
                }
                ptr = ptr->next;
            }
            return temp;
        }

        // apend a node into the list at last

        void appendNode(Node *n){
            if(nodeExists(n->key)!=NULL)
            {
                cout << "node exists with"<<n->key<<" key number "<<'\n';
            }
            else{
                if(head==NULL)
                {
                    head = n;
                    cout<<"apended"<<'\n';
                }
                else{
                    Node *ptr = head;
                    while(ptr->next!=NULL)
                    {
                        ptr = ptr->next;
                    }
                    ptr->next = n;
                    cout<<"apended"<<'\n';
                }
            }
        }

        //prepend node
        void prependNode(Node *n)
        {
            if(nodeExists(n->key)!=NULL)
            {
                cout << "node exists with"<<n->key<<" key number "<<'\n';
            }
            else{
                n->next = head;
                head = n;
                cout<<"appended"<<'\n';
            }
        }

        // inserting node in b/w somewhere
        void insertNode(Node *n,int k){
            Node *ptr = nodeExists(k);
            if(ptr==NULL)
            {
                cout<<"NO NODE EXISTS WITH KEY "<<k<<'\n';
            }
            else{
                if(nodeExists(n->key)!=NULL)
                {
                    cout << "node exists with"<<n->key<<" key number "<<'\n';
                }
                else{
                    n->next = ptr->next;
                    ptr->next = n ;
                    cout<<"apended node"<<'\n';
                }
            }
        }

        // deleteing node by key

        void deleteNode(int k){

            if(head == NULL)
            {
                cout<<"empty list"<<'\n';
            }
            else{
                if(head->key==k){
                    head = head->next ;
                    cout<<"deleted"<<'\n';
                }

            }

            if(nodeExists(k)==NULL){
                cout<<"NO NODE EXISTS WITH KEY "<<k<<'\n';
            }
            else{
                Node* ptr = head;
                Node * temp= NULL;
                while(ptr->next->key==k)
                {
                    ptr = ptr->next;
                }
                temp = ptr->next;
                ptr->next = temp->next;
                cout<<"node deleted"<<'\n';
            }
        }

        // printing SinglyLinkedList
        void printList(){
            if(head == NULL)
            {
                cout<<"list is empty"<<'\n';
            }
            else{
                Node * ptr = head;
                while(ptr->next!=NULL)
                {
                    cout<<ptr->key<<" th listnode data is: "<<ptr->data<<'\n';
                }
                ptr=ptr->next;
            }
        }

        // update a node data by key
        void updateNode(int k,int v)
        {
            if(nodeExists(k)==NULL)
            {
                cout<<"ket entered DON'T exists"<<'\n';
            }
            else{
                Node * ptr = nodeExists(k);
                ptr->data=v;
            }
        }
};

int main()
{
    int opt;
    SinglyLinkedList s;
    int key1,k1,data1;

    do
    {
        /* code */
        cout<<"opt to perform: "<<'\n';
        cout<<"1 appendnode at last"<<'\n';
        cout<<"2 prependnode at front"<<'\n';
        cout<<"3 deletenode"<<'\n';
        cout<<"4 printnode"<<'\n';
        cout<<"5 updatenode"<<'\n';
        cout<<"6 insertnode at between"<<'\n';
        cout<<"7 clear screen"<<'\n';

        cin>>opt;

        Node* n1 = new Node();

        switch(opt){
            case 1:
            {
                cout<<"enter key data to be appended \n";
                cin>>key1>>data1;
                n1->key=key1;
                n1->data = data1;
                s.appendNode(n1);
                break;
            }

            case 2:
            {
                cout<<"enter key data to be prepend \n";
                cin>>key1>>data1;
                n1->key=key1;
                n1->data = data1;
                s.prependNode(n1);
                break;
            }

            case 3:
            {
                cout<<"enter key of node to be deleted: \n";
                cin>>key1;
                s.deleteNode(key1);
                break;
            }

            case 6:
            {
                cout<<"enter key after which u want node to insert \n";
                cin>>k1;
                cout<<"enter key, data to be inserted \n";
                cin>>key1>>data1;
                n1->key=key1;
                n1->data = data1;
                s.insertNode(n1,k1);
                break;
            }

            case 4:
            {
                cout<<"link list : \n";
                s.printList();
                break;
            }

            case 5:
            {
                cout<<"enter key of node to be update \n enter data to be update into\n";
                cin>>k1>>data1;
                s.updateNode(k1,data1);
                break;
            }

            case 7:
            {
                system("cls");
                break;
            }

            case 0:
                break;

            default:{
                cout<<"opt entered is wrong \n pls try again \n";
            }

        }

    } while (opt != 0);
    

    return 0;
}
