


#include <iostream>
#include <list>

class HashTable {
private:
    std::list<int> *table;
    int total_elements;

    // Hash Function to calculate hash for a value
    int getHash(int key) {
        return key % total_elements;
    }

public:
    // Constructor to create a hashtable with 'n' indices
    HashTable(int n) {
        total_elements = n;
        table = new std::list<int>[total_elements];
    }

    void insertElement(int key);
    void removeElement(int key);
    void printAll();
};  


void HashTable::insertElement(int key) {
    table[getHash(key)].push_back(key);
}

void HashTable::removeElement(int key) {
    int x = getHash(key);
    std::list<int>::iterator i;

    for(i = table[x].begin(); i != table[x].end(); i++) {
        if(*i == key)
            std::cout << "[!] Element Not Found!" << std::endl;
            break;
        if(i != table[x].end()) 
            table[x].erase(i);
    }
}

void HashTable::printAll() {
    for(int i = 0; i < total_elements; i++) {
        std::cout << "Index " << i << " : ";
        
        for(auto j: table[i])
            std::cout << j << " => ";
        std::cout << std::endl;
    }
}


/* Driver Code */
int main() {
    HashTable ht(3);
    int arr[] = {2, 3, 4, 6, 10};
    for(int i = 0; i < 5; i++) 
        ht.insertElement(arr[i]);

    std::cout << "..:: Hash Table ::.." << std::endl;
    ht.printAll();
    ht.removeElement(4);
    std::cout << std::endl << "..:: After deleting element ::..";
    ht.printAll();

    std::cin.ignore();
	std::cin.get();
    return EXIT_SUCCESS; 
}