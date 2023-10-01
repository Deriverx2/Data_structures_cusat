// Implement a stack using Linked List with the following operations : PUSH, POP, ISEMPTY,SIZE()
#include <iostream>
using std::cin, std::cout, std::endl;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        next = NULL;
        prev = NULL;
    }
    Node(int data, Node *prev)
    {
        this->data = data;
        next = NULL;
        this->prev = prev;
    }
};

class LinkedList
{
    Node *tail;

public:
    LinkedList()
    {
        tail = NULL;
    }

    void insertLast(int data)
    {
        if (tail != NULL)
        {
            tail->next = new Node(data, tail);
            tail = tail->next;
            return;
        }
        tail = new Node(data);
        return;
    }

    int removeLast()
    {
        if (tail != NULL)
        {
            int data = tail->data;
            Node *temp = tail;
            if (tail->prev != NULL)
            {
                tail = tail->prev;
                tail->next = NULL;
            }
            else
                tail = NULL;
            delete temp;
            return data;
        }
    }
};

class Stack
{
    LinkedList *linkedlist;
    int count;
    int limit;

public:
    Stack(int n)
    {
        limit = n;
        linkedlist = new LinkedList();
        count = 0;
    }

    void push(int data)
    {
        if (count == limit)
        {
            cout << "stack full" << endl;
            return;
        }
        count++;
        linkedlist->insertLast(data);
    }

    int pop()
    {
        if (count != 0)
        {
            count--;
            return linkedlist->removeLast();
        }
    }

    bool isEmpty()
    {
        if (count == 0)
            return true;
        return false;
    }

    int size()
    {
        return count;
    }

    ~Stack(){
        delete linkedlist;
    }
};

int main()
{
    int n;
    cout << "Enter size of stack: ";
    cin >> n;
    Stack stack(n);
    cout << "1.PUSH" << endl;
    cout << "2.POP" << endl;
    cout << "3.ISEMPTY" << endl;
    cout << "4.SIZE" << endl;
    cout << "5.Exit" << endl;
    int choice;
    do
    {
        cout << "Your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            int value;
            cout << "Enter element to push: ";
            cin >> value;
            stack.push(value);
            break;
        case 2:
            if (!stack.isEmpty())
            {
                cout << "Popped " << stack.pop() << endl;
            }
            else
            {
                cout << "Stack is empty" << endl;
            }
            break;
        case 3:
            if (stack.isEmpty())
            {
                cout << "Stack is empty" << endl;
            }
            else
            {
                cout << "Stack contains elements" << endl;
            }
            break;
        case 4:
            cout << "Stack has " << stack.size() << " elements" << endl;
            break;
        case 5:
            cout << "Thank you for using our program!!!!" << endl;
            cout << "Beware your computer might be hacked" << endl;
            break;
        default:
            cout << "Wrong choice" << endl;
            break;
        }
    } while (choice != 5);
    return 0;
}