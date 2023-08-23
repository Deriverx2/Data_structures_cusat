#include <iostream>
using std::cout, std::cin, std::endl;

class node
{
public:
    int data;
    node*prev = NULL;
    node *next = NULL;

    node()
    {
        this->data = 0;
    }
    node(int data)
    {
        this->data = data;
    }
};

class doublyLinkedList
{
    int N;
    node *head;
    node *tail;

public:
    doublyLinkedList(int N)
    {
        this->N = N;
        setList();
    }

    void setList()
    {
        int data;
        cout << "Enter elements of linked list: ";
        cin >> data;
        node *current = new node(data);
        head = current;
        for (int i = 0; i < N - 1; i++)
        {
            cin >> data;
            node *temp = new node(data);
            current->next = temp;
            temp->prev=current;
            current = temp;
        }
        tail = current;
    }

    void displayH()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void displayT(){
        node *temp = tail;
        cout << "NULL" ;
        while (temp != NULL)
        {
            cout << "->" << temp->data ;
            temp = temp->prev;
        }

    }
};

int main()
{
    int n;
    cout << "Enter number of elements:";
    cin >> n;
    doublyLinkedList dLL(n);
    dLL.displayH();
    dLL.displayT();
    return 0;
}