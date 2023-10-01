// Implement a stack using array with the following operations : PUSH, POP, ISEMPTY, SIZE()
#include <iostream>
using std::cin, std::cout, std::endl;

class Stack
{
    int *arr;
    int top;
    int limit;

public:
    Stack(int n)
    {
        limit = n;
        arr = new int[limit];
        top = -1;
    }

    void push(int data)
    {
        if (top + 1 == limit)
        {
            cout << "stack full" << endl;
            return;
        }
        top++;
        arr[top] = data;
    }

    int pop()
    {
        if (top != -1)
        {
            top--;
            return arr[top + 1];
        }
    }

    bool isEmpty()
    {
        if (top == -1)
            return true;
        return false;
    }

    int size()
    {
        return top + 1;
    }
    ~Stack(){
        delete[] arr;
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
