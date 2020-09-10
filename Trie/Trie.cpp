#include "Trie.h"

Trie::Trie() : endOfWord(false){
    for(int i=0;i<26;i++) curr_to_next[i]=nullptr;
}

void Trie::insert_word(string word) {
    Trie* curr_node = this;
    for(const char& ch:word) {
        if(curr_node->curr_to_next[ch-'a'] == nullptr) {
            Trie* next_node = new Trie();
            curr_to_next[ch-'a'] = next_node;
        }
        curr_node=curr_to_next[ch-'a'];
    }
    curr_node->endOfWord = true;
}

void Trie::print() {
    Trie* curr_node = this;
    for(int i=0;i<26;i++) {
        if(curr_node->curr_to_next[i] != nullptr) {
            curr_node=curr_node->curr_to_next[i];
            cout << i << " ";
        }
    }
}

bool Trie::search_word(string word) {
    Trie* curr_node = this;
    for(const char& ch:word) {
        if(curr_node->curr_to_next[ch-'a'] == nullptr) {
            return false;
        }
        curr_node=curr_to_next[ch-'a'];
    }
    return endOfWord;
}

bool Trie::starts_with(string prefix) {
    Trie* curr_node = this;
    for(const char& ch:prefix) {
        if(curr_node->curr_to_next[ch-'a'] == nullptr) {
            return false;
        }
        curr_node=curr_to_next[ch-'a'];
    }
    return true;
}
