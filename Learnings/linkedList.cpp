#include <iostream>
using std::cout, std::cin, std::endl;

class node{
    int data;
    node* next;
    
    public:
        void setData(int data){this->data = data;}
        int getData(){return this->data;}
        void setNext(node* next){this->next = next;}
        int getNext(){return this->next;}
};

class linkedList{
    int N;
    node* head;
    public:
        linkedList(int N){
            this->N = N;
        }

        void setList(){
            node temp;
            int data;
            cout<<"Enter elements of linked list: ";
            cin>>data;
            temp.setData(data);
            temp.setNext(NULL);
            head=temp;
            for (int i = 0; i < N-1; i++){
                cin>>data;
                temp.setData(data);
                temp.setNext(NULL);
                if (head->getData < temp->getData)
                {
                    temp.setNext(head);
                    head=temp;
                }
                

            }
        }
        
        // void insertAtFront(node* head){this->head = head;}
        void search(int key){
            coutt<<"Searching "<<key<<":";
            node* cureent=head;
            int count=0;
            bool found=false;
            while (current != NULL)
            {
                if (temp->getData==key)
                {
                    cout<<count<<" ";
                    found=true;
                }
                count++;
                current=current->getNext;
            }
            if (!found)
            {
                cout<<"NOT FOUND";
            }
        }

        void count_duplcates(int key){
            coutt<<"Counting duplicates of "<<key<<":";
            node* current=head;
            int count=0;
            while (current != NULL)
            {
                if (current->getData==key)
                {
                    count++;
                }
                current=current->getNext;
            }
            if (count<=1)
            {
                cout<<"NO DUPLICATES";
            }
            else cout<<count-1;
        }

        void remove_duplicates(int key){
            coutt<<"Removing duplicates of "<<key<<":";
            node* current=head;
            int count=0;
            while (current != NULL)
            {
                if (current->getData==key)
                {
                    count++;
                    if (count>1)
                    {
                        
                    }
                    
                }
                current=current->getNext;
            }
            

        }

        void insert_pos(int key, int pos){
        
        }
}

int main(){




    return 0;
}