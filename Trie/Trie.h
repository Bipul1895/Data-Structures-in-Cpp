#ifndef TRIE_H
#define TRIE_H
#include <string>
#include <iostream>
using namespace std;

class Trie
{
    public:
        Trie();
        void insert_word(string word);
        bool search_word(string word);
        bool starts_with(string prefix);
        void print();

    protected:

    private:
        bool endOfWord;
        Trie* curr_to_next[26];
};

#endif // TRIE_H
