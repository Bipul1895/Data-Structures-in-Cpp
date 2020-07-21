#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int pass=0;pass<n-1;pass++){
        bool moveToNextPass=false;
        for(int j=0;j<n-1-pass;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                moveToNextPass=true;
            }
        }
        if(!moveToNextPass) return;
    }
}

int main() {
    int arr[] {3,7,9,10,6,5,12,4,11,2};
    int n=sizeof(arr)/sizeof(int);

    bubbleSort(arr,n);

    cout << "Sorted array : ";
    for(int i=0;i<n;i++) cout << arr[i] << " ";

    cout<<endl;
    return 0;
}
