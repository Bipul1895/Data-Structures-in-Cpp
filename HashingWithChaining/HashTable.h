//
// Created by bipul on 29/05/20.
//

#ifndef HASHINGWITHCHAINING_HASHTABLE_H
#define HASHINGWITHCHAINING_HASHTABLE_H
#include "ListNode.h"

class HashTable {
private:
    static const int SIZE=10;
protected:
    ListNode* hashArray[SIZE];
    int HashFunc(int key);
public:
    HashTable();
    void Insert(int key);
    void PrintHashTable();
};


#endif //HASHINGWITHCHAINING_HASHTABLE_H
