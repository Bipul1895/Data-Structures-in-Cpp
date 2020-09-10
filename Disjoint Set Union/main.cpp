#include <iostream>

using namespace std;

/**
 * Merge two connected components
 * O(N)
 */
void union1(int A, int B, int Arr[], int n) {
    int parA=Arr[A];
    int parB=Arr[B];
    for(int i=0;i<n;i++) {
        if(Arr[i] == parB) {
            Arr[i]=parA;
        }
    }
}

/**
 * Returns true if A and B are in the same connected component
 * O(1)
 */
bool find1(int A, int B, int Arr[], int n) {
    int parA=Arr[A];
    int parB=Arr[B];

    return parA==parB;

}

//==================================================================

/**
 * returns root of element A
 * O(N)
 */
int root(int A, int Arr[], int n) {
    while(Arr[A]!=A) {
        A=Arr[A];
    }
    return A;
}

/**
 * Merge two connected components
 * O(N)
 */
void union2(int A, int B, int Arr[], int n) {
    int rootA=root(A,Arr,n);
    int rootB=root(B,Arr,n);
    Arr[rootB]=rootA;
}

/**
 * Returns true if A and B are in the same connected component
 * O(N)
 */
bool find2(int A, int B, int Arr[], int n) {
    int rootA=root(A,Arr,n);
    int rootB=root(B,Arr,n);
    return rootA==rootB;
}

//================================================================

/**
 * returns root of element A
 * O(log(N))
 */
int root_path_compression(int A, int Arr[], int n) {
    while(Arr[A]!=A) {
        A=Arr[Arr[A]];
    }
    return A;
}

void weighted_union(int A, int B, int Arr[], int sz[], int n) {
    int rootA=root(A,Arr,n);
    int rootB=root(B,Arr,n);

    if(rootA == rootB) return;

    if(sz[rootA] >= sz[rootB]) {
        Arr[rootB]=rootA;
        sz[rootA]+=sz[rootB];
    } else {
        Arr[rootA]=rootB;
        sz[rootB]+=sz[rootA];
    }
}


int main()
{
    int n=10;
    int Arr[10] ;
    int sz[10];
    //indices of the array Arr represent the element.
    //value of Arr at the index represents the parent of that element.

    for(int i=0;i<10;i++) {
        Arr[i]=i;
        sz[i]=1;
    }

    return 0;
}
