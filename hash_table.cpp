#include <iostream>
#include <stdint.h>
#include <vector>
#include <list>


int hash_function(int x, int capacity) {
    return (x % capacity);
}

int main()
{
    //No Collision(Uncomment to see case)
    //std::vector<int> key = {14,20,17,23,25};
    //
    //Collision Case
    //std::vector<int> key = { 14,20,17,23,25,27 };

    std::vector<int> table(10, NULL);
    for (int i = 0; i < key.size(); i++) {
        int index = hash_function(key[i], table.capacity());
        
        while (table[index] != NULL) {
            if (index >= table.capacity()) {
                index %= index;
            }
            index++;
        }
        table[index] = key[i];
    }
    
    for (auto x : table) {
        std::cout << x << std::endl;
    }
}

