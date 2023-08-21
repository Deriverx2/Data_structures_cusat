#include <iostream>
using std::cout, std::cin, std::endl;

class node{
    int data;
    node* next;
    
    public:
        void setData(int data){this->data = data;}
        int getData(){return this->data;}
        void setNext(node* next){this->next = next;}
        node* getNext(){return this->next;}
};

class linkedList{
    int N;
    node* head;
    public:
        linkedList(int N){
            this->N = N;
            setList();
        }

        void setList(){
            node temp;
            int data;
            cout<<"Enter elements of linked list: ";
            cin>>data;
            temp.setData(data);
            temp.setNext(NULL);
            head=&temp;
            for (int i = 0; i < N-1; i++){
                cin>>data;
                temp.setData(data);
                temp.setNext(NULL);
                
                
            
            }
        }
        
        // void insertAtFront(node* head){this->head = head;}
        void search(int key){
            cout<<"Searching "<<key<<":";
            node* current=head;
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
            cout<<"Counting duplicates of "<<key<<":";
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
            cout<<"Removing duplicates of "<<key<<":";
            node* current=head;
            int count=0;
            node* prev=NULL;
            while (current != NULL)
            {
                if (current->getData==key)
                {
                    count++;
                    if (count>1)
                    {
                        prev.setNext(current->getNext);
                        delete current;
                        current=prev;
                        N--;
                    }
                }
                prev=current;
                current=current->getNext;
            }
            //print linkedList

        }

        void insert_pos(int key, int pos){
            if(pos>N-1){cout<<"LIST TOO SMALL";}
            else{
                int count=0;
                node* current=head;
                while (current != NULL){
                    count++;
                    current=current->getnext;
                    if(pos==count)current.setData(key);
                }                
            }
        
        }
};

int main(){
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    linkedList lL(n);
    



    return 0;
}
