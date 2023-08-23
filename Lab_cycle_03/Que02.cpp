#include <iostream>
using std::cout, std::cin, std::endl;

class node
{
public:
    int data;
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

class linkedList
{
    int N;
    node *head;

public:
    linkedList(int N)
    {
        this->N = N;
    }

    void setHead(node *head)
    {
        this->head = head;
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
            current = temp;
        }
    }

    void display()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void alt_splicing(linkedList *A, linkedList *B)
    {
        node *current = head;
        node *currentA = new node(current->data);
        A->setHead(currentA);
        current = current->next;
        node *currentB = new node(current->data);
        B->setHead(currentB);
        current = current->next;
        while (current != NULL)
        {
            node *tempA = new node(current->data);
            currentA->next = tempA;
            currentA = tempA;
            current = current->next;
            if (current != NULL)
            {
                node *tempB = new node(current->data);
                currentB->next = tempB;
                currentB = tempB;
                current = current->next;
            }
        }
    }
};

int main()
{
    int n;
    cout << "Enter number of elements:";
    cin >> n;
    linkedList lL(n);
    lL.setList();
    lL.display();

    int mid = n / 2;
    linkedList L1(mid);
    linkedList L2(n - mid);

    lL.alt_splicing(&L1, &L2);
    cout<<"\n";
    L1.display();
    cout<<"\n";
    L2.display();

    return 0;
}