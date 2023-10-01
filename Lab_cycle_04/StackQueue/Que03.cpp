// Implement a queue using array with the following operations : ENQUEUE, DEQUEUE, ISEMPTY, SIZE()

#include <iostream>
using std::cin, std::cout, std::endl;

class Queue
{
    int *arr;
    int front;
    int back;
    unsigned int limit;
    int count;

public:
    Queue(unsigned int n)
    {
        limit = n;
        front = -1;
        arr = new int[limit];
        back = -1;
        count=0;
    }

    void enqueue(int data)
    {
        if (back+1 == limit)
        {
            cout << "Queue full" << endl;
            return;
        }
        if (front==-1)
        {
            front++;
        }
        count++;
        arr[++back] = data;
    }

    int dequeue()
    {
        if (!isEmpty())
        {
            count--;
            int data=arr[front];
            for (int i = front; i < back-1; i++)
            {
                arr[i]=arr[i+1];
            }
            back--;
            return data;
        }
    }

    bool isEmpty()
    {
        if (count==0)
            return true;
        return false;
    }

    int size()
    {
        return count;
    }

    ~Queue(){
        delete arr;
    }
};

int main()
{
    unsigned int n;
    cout << "Enter size of queue: ";
    cin >> n;
    Queue queue(n);
    cout << "1.ENQUEUE" << endl;
    cout << "2.DEQUEUE" << endl;
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
            cout << "Enter element to enqueue: ";
            cin >> value;
            queue.enqueue(value);
            break;
        case 2:
            if (!queue.isEmpty())
            {
                cout << "Dequeued " << queue.dequeue() << endl;
            }
            else
            {
                cout << "Queue is empty" << endl;
            }
            break;
        case 3:
            if (queue.isEmpty())
            {
                cout << "Queue is empty" << endl;
            }
            else
            {
                cout << "Queue contains elements" << endl;
            }
            break;
        case 4:
            cout << "Queue has " << queue.size() << " elements" << endl;
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
