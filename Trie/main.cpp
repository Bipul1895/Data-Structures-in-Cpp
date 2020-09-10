#include <iostream>
#include "Trie.h"
using namespace std;

int main()
{
    Trie* root=new Trie;
    root->insert_word("apple");

    root->print();

    if(root->search_word("apple")) cout << "word is found\n";
    else cout << "word not found\n";


    return 0;
}
