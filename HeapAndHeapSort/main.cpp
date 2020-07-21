#include <iostream>
using namespace std;

void Insert(int heap[], int n){
    int i=n;
    while(i>1 and heap[i]>heap[i/2]){
        swap(heap[i], heap[i/2]);
        i/=2;
    }
}

int Delete(int heap[], int n){
    //n=size of array heap
    int topVal=heap[1];
    swap(heap[1], heap[n]);

    int par=1;
    int lChild=2*par, rChild=2*par+1;
    int child=lChild;

    while (lChild <= n-1){
        if(rChild <= n-1 and  heap[rChild] > heap[lChild]){
            child=rChild;
        }
        if(heap[par] < heap[child]){
            swap(heap[par], heap[child]);
            par=child;
        }
        else break;

        lChild=2*par;
        rChild=lChild+1;
    }

    return topVal;
}

int main() {
    int heap[] {0,10,20,30,25,5,40,35};

    for(int i=2;i<=7;i++){
        Insert(heap, i);
    }

//    for(int i=1;i<=7;i++) cout << heap[i] << " ";

//    cout << "Deleted value : " << Delete(heap, 7) << "\n";

    for(int i=7;i>1;i--){
        Delete(heap, i);
    }
//After the above operation, the array will be sorted, this is heap sort

    for(int i=1;i<=7;i++) cout << heap[i] << " ";

    return 0;
}
