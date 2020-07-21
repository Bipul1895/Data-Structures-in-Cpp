//
// Created by bipul on 28/05/20.
//

#include "AvlTree.h"
#include <algorithm>

AvlTree::AvlTree(int key) : val(key) , height(1), lTree(nullptr), rTree(nullptr) {

}

AvlTree* AvlTree::insert(AvlTree *root, int key) {
    if(root== nullptr){
        AvlTree* newNode=new AvlTree(key);
        return newNode;
    }

    if(key < root->val){
        root->lTree=insert(root->lTree, key);
    }
    else{
        root->rTree=insert(root->rTree, key);
    }

    root->height=nodeHeight(root);

    if(balanceFactor(root)==2){
        if(balanceFactor(root->lTree)==1){
            return LLRotation(root);
        }
        else if(balanceFactor(root->lTree)==-1){
            return LRRotation(root);
        }
    }
    else if(balanceFactor(root)==-2){

    }
    return root;
}

int AvlTree::balanceFactor(AvlTree * root) {
    AvlTree *left=root->lTree, *right=root->rTree;
    if(left==nullptr and right==nullptr) return 0;
    else if(left==nullptr) return 0-right->height;
    else if(right==nullptr) return left->height;
    return left->height - right->height;
}

int AvlTree::nodeHeight(AvlTree * root) {
    if(root== nullptr) return 0;
    AvlTree *left=root->lTree, *right=root->rTree;
    if(left== nullptr && right== nullptr) return 1;
    else if(left== nullptr) return right->height+1;
    else if(right== nullptr) return left->height+1;
    return std::max(left->height, right->height) + 1;
}

AvlTree* AvlTree::LRRotation(AvlTree * root) {
    AvlTree* lRoot=root->lTree;
    AvlTree* rLRoot=lRoot->rTree;

    lRoot->rTree=rLRoot->lTree;
    root->lTree=rLRoot->rTree;

    rLRoot->lTree=lRoot;
    rLRoot->rTree=root;

    //fixing heights:
    root->height=nodeHeight(root);
    lRoot->height=nodeHeight(lRoot);
    rLRoot->height=nodeHeight(rLRoot);

    return rLRoot;
}

AvlTree* AvlTree::LLRotation(AvlTree * root) {
    AvlTree* lRoot=root->lTree;
    AvlTree* lRRoot=lRoot->rTree;

    root->lTree=lRRoot;
    lRoot->rTree=root;

    //fixing heights:
    root->height=nodeHeight(root);
    lRoot->height=nodeHeight(lRoot);

    return lRoot;
}
