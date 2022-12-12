#include <iostream>
#include <vector>

// Hash table size
const int TABLE_SIZE = 10;

// Hash table
std::vector<int> table(TABLE_SIZE, -1);

// Function to insert a key into the hash table
void insert(int key)
{
    // Find the hash value of the key
    int hash = key % TABLE_SIZE;

    // If the slot is not empty, linear probing is used
    while (table[hash] != -1)
    {
        // Move to the next slot
        hash = (hash + 1) % TABLE_SIZE;
    }

    // Insert the key in the empty slot
    table[hash] = key;
}

int main()
{
    // Insert some keys into the hash table
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    //Uncomment for Collision Case
    //insert(3)
    for (auto x : table) {
        std::cout << x << std::endl;
    }
    return 0;
}
