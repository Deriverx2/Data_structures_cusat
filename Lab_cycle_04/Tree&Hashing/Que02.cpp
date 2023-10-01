/*Implement a hash table with linear probing using array with the following operations : 
INSERT(key), DELETE(key), SEARCH(key). */

#include <iostream>
#include <vector>

class HashTable {
private:
    static const int TABLE_SIZE = 10; // Size of the hash table
    std::vector<int> values;

    // Hash function to calculate the index
    int hash(int key) {
        return key % TABLE_SIZE;
    }

public:
    HashTable() {
        values.resize(TABLE_SIZE, -1); // Initialize values with -1 to indicate empty slots.
    }

    // Insert a value into the hash table
    void insert(int value) {
        int index = hash(value);

        // Linear probing to handle collisions
        while (values[index] != -1) {
            index = (index + 1) % TABLE_SIZE;
        }

        values[index] = value;
    }

    // Delete a value from the hash table
    void remove(int value) {
        int index = hash(value);

        while (values[index] != -1) {
            if (values[index] == value) {
                values[index] = -1; // Mark the slot as empty
                return;
            }
            index = (index + 1) % TABLE_SIZE;
        }
    }

    // Search for a key in the hash table and return its value
    int search(int value) {
        int index = hash(value);

        while (values[index] != -1) {
            if (values[index] == value) {
                return index; // Return the key (same as the value in this case).
            }
            index = (index + 1) % TABLE_SIZE;
        }

        return -1; // Key not found
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
                int result = ht.search(value);
                if (result != -1) {
                    std::cout << "Value for key " << value << ": " << result << std::endl;
                } else {
                    std::cout << "Key not found." << std::endl;
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
