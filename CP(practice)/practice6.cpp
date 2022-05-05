#include <iostream>
using namespace std;

class Node
{
public:
    Node *prev;
    int data;
    Node *next;

    //This : Represents to the current instance of the class

    //This is a constructor
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    // This is the Destructor : It is used to release the memory
    ~Node()
    {
       
        if (prev != NULL)
        {
            Node *trav = prev;
            while (prev != NULL)
            {
                prev = prev->next;
                delete trav;
            }
        }
        if(next != NULL){
              Node *trav = next;
            while (next != NULL)
            {
                prev = prev->next;
                delete trav;
            }
        }

        // if ((next) != NULL){
        //     delete next;
        //     next = NULL;
        // }
        // if ((prev) != NULL){
        //     delete prev;
        //     prev = NULL;
        // }
        // cout<<"Destructor called!"<<endl;
        cout << this->data << " is removed" << endl;
    }
};

//function for  insertion at head
void InsertionAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    head->prev = temp;
    temp->next = head;
    head = temp;
}

//function for insertion at tail
void InsertionAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

//function for insertion at middle
void InsertionAtPartPos(Node *&tail, Node *&head, int index, int data)
{
    if (index == 0)
    {
        InsertionAtHead(head, data);
        return;
    }
    else
    {
        Node *before_ptr = head; //initializing from the head
        for (int i = 0; i < (index - 1); i++)
        {
            before_ptr = before_ptr->next;
        }
        if ((before_ptr->next) == NULL)
        {
            InsertionAtTail(tail, data);
            return;
        }
        Node *temp = new Node(data);
        temp->next = before_ptr->next;
        before_ptr->next->prev = temp;
        temp->prev = before_ptr;
        before_ptr->next = temp;
    }
}

void DeleteNode(Node *&head, Node *&tail, int index)
{
    if (index == 0)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *before_ptr = NULL;
        Node *current_ptr = head;
        for (int i = 0; i < index; i++)
        {
            before_ptr = current_ptr;
            current_ptr = current_ptr->next;
        }

        if ((current_ptr->next) == NULL)
        {
            before_ptr->next = NULL;
            current_ptr->prev = NULL;
            tail = before_ptr;
            delete current_ptr;
        }
        else
        {
            before_ptr->next = current_ptr->next;
            current_ptr->next->prev = before_ptr;
            current_ptr->next = NULL;
            current_ptr->prev = NULL;
            delete current_ptr;
        }
    }
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node *arr = new Node(2);
    Node *head = arr;
    Node *tail = arr;
    print(head); // 2
    InsertionAtHead(head, 3);
    print(head); // 3 2
    InsertionAtHead(head, 3);
    print(head); // 3 3 2
    InsertionAtTail(tail, 4);
    print(head);                            //  3 3 2 4
    InsertionAtPartPos(tail, head, 0, 100); //It should be called as Part Position not middle !
    print(head);                            //100 3 3 2 4
    InsertionAtPartPos(tail, head, 5, 100);
    print(head); // 100 3 3 2 4 100
    DeleteNode(head, tail, 5);
    print(head);
    // DeleteNode(head, tail, 4);
    // print(head);
    // DeleteNode(head, tail, 0); //100
    // print(head);
    // DeleteNode(head, tail, 1);  //3
    // print(head);
    // DeleteNode(head, tail, 2);
    // print(head);

    // ~Node();

    delete head;
    return 0;
}