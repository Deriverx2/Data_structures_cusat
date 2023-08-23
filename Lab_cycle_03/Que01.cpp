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

    void search(int key)
    {
        cout << "Searching " << key << ":";
        node *current = head;
        int count = 0;
        bool found = false;
        while (current != 0)
        {
            if (current->data == key)
            {
                cout << count << " ";
                found = true;
            }
            count++;
            current = current->next;
        }
        if (!found)
        {
            cout << "NOT FOUND";
        }
        cout << endl;
    }

    void count_duplcates(int key)
    {
        cout << "Counting duplicates of " << key << ":";
        node *current = head;
        int count = 0;
        while (current != NULL)
        {
            if (current->data == key)
            {
                count++;
            }
            current = current->next;
        }
        if (count <= 1)
        {
            cout << "NO DUPLICATES" << endl;
        }
        else
            cout << count - 1 << endl;
    }

    void remove_duplicates(int key)
    {
        cout << "Removing duplicates of " << key << ":";
        node *current = head;
        int count = 0;
        node *prev = NULL;
        while (current != NULL)
        {
            if (current->data == key)
            {
                count++;
                if (count > 1)
                {
                    prev->next = current->next;
                    delete current;
                    current = prev;
                    N--;
                }
            }
            prev = current;
            current = current->next;
        }
        display();
    }

    void insert_pos(int key, int pos)
    {
        if (pos > N - 1)
        {
            cout << "LIST TOO SMALL" << endl;
        }
        else
        {
            int count = 0;
            node *current = head;
            while (current != NULL)
            {
                if (pos == count) current->data = key;
                count++;
                current = current->next;
            }
            display();
        }
    }
};

int main()
{
    int n;
    cout << "Enter number of elements:";
    cin >> n;
    linkedList lL(n);
    lL.display();
    int choice;
    int key;
    do
    {
        cout << "\n*****************MENU*****************" << endl;
        cout << "1. Search elements" << endl;
        cout << "2. Count duplicates" << endl;
        cout << "3. Remove duplicates" << endl;
        cout << "4. Insert at position" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter key to search:";
            cin >> key;
            lL.search(key);
            break;
        case 2:
            cout << "Enter key to find duplicates of:";
            cin >> key;
            lL.count_duplcates(key);
            break;
        case 3:
            cout << "Enter key to remove duplicates of:";
            cin >> key;
            lL.remove_duplicates(key);
            break;
        case 4:
            cout << "Enter key to find to insert:";
            cin >> key;
            int pos;
            cout << "Enter position to insert to:";
            cin >> pos;
            lL.insert_pos(key, pos);
            break;
        case 5:
            cout << "THANK YOU!" << endl;
            break;
        default:
            cout << "ERROR: Unknown choice!" << endl;
        }
        cout << "**********************************" << endl;

    } while (choice != 5);

    return 0;
}