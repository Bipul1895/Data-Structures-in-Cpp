#include <iostream>
#include "HashTable.h"
using namespace std;

int main() {
    HashTable hashTable;
    hashTable.Insert(1);
    hashTable.Insert(11);
    hashTable.Insert(22);
    hashTable.Insert(12);
    hashTable.Insert(15);
    hashTable.Insert(2);

    hashTable.PrintHashTable();

    return 0;
}
