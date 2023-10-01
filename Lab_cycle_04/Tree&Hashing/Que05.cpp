/* Implement a hash table using Linked List with separate chaining with the following 
operations : INSERT(key), DELETE(key), SEARCH(key)*/

#include <iostream>
#include <list>

class HashTable {
private:
    static const int TABLE_SIZE = 10; // Size of the hash table
    std::list<int> table[TABLE_SIZE]; // Array of linked lists

    // Hash function to calculate the index
    int hash(int key) {
        return key % TABLE_SIZE;
    }

public:
    // Insert a value into the hash table
    void insert(int value) {
        int index = hash(value);
        table[index].push_back(value);
    }

    // Delete a value from the hash table
    void remove(int value) {
        int index = hash(value);
        table[index].remove(value);
    }

    // Search for a value in the hash table
    bool search(int value) {
        int index = hash(value);
        for (const int& item : table[index]) {
            if (item == value) {
                return true; // Value found
            }
        }
        return false; // Value not found
    }
};

int main() {
    HashTable ht;
    int choice;

    do {
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Insert" << std::endl;
        std::cout << "2. Delete" << std::endl;
        std::cout << "3. Search" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                int value;
                std::cout << "Enter value to insert: ";
                std::cin >> value;
                ht.insert(value);
                break;
            }
            case 2: {
                int value;
                std::cout << "Enter value to delete: ";
                std::cin >> value;
                ht.remove(value);
                break;
            }
            case 3: {
                int value;
                std::cout << "Enter value to search: ";
                std::cin >> value;
                bool found = ht.search(value);
                if (found) {
                    std::cout << "Value " << value << " found." << std::endl;
                } else {
                    std::cout << "Value " << value << " not found." << std::endl;
                }
                break;
            }
            case 4:
                std::cout << "Exiting program." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }
    } while (choice != 4);

    return 0;
}
