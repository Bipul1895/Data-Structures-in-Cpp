//
// Created by bipul on 28/05/20.
//

#ifndef AVLTREECODE_AVLTREE_H
#define AVLTREECODE_AVLTREE_H


class AvlTree {
protected:
    int val;
    int height;
    AvlTree* lTree;
    AvlTree* rTree;

    int nodeHeight(AvlTree*);
    int balanceFactor(AvlTree*);
    AvlTree* LLRotation(AvlTree*);
    AvlTree* LRRotation(AvlTree*);
    //AvlTree* RRRotation(AvlTree*);
    //AvlTree* RLRotation(AvlTree*);


public:
    AvlTree(int key);
    AvlTree* insert(AvlTree* root, int key);
};


#endif //AVLTREECODE_AVLTREE_H
