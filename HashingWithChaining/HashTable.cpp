//
// Created by bipul on 29/05/20.
//

#include <iostream>
#include "HashTable.h"
#include "ListNode.h"

HashTable::HashTable() : hashArray{nullptr} {}

int HashTable::HashFunc(int key) {
    return key%SIZE;
}

void HashTable::Insert(int key) {
    int index=HashFunc(key);
    ListNode* currNode=hashArray[index];
    ListNode* prevNode= nullptr;

    while (currNode != nullptr and currNode->val < key){
        prevNode=currNode;
        currNode=currNode->next;
    }

    ListNode* newNode=new ListNode(key);
    if(prevNode==nullptr){
        newNode->next=hashArray[index];
        hashArray[index]=newNode;
    }
    else{
        prevNode->next=newNode;
        newNode->next=currNode;
    }
}

void HashTable::PrintHashTable() {
    for(int i=0;i<SIZE;i++){
        if(hashArray[i]!=nullptr){
            std::cout << i << " : ";
            ListNode* iter=hashArray[i];
            while(iter!=nullptr){
                std::cout << iter->val << " ";
                iter=iter->next;
            }
            std::cout << "\n";
        }
    }
}