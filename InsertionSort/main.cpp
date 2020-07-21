#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=1;i<n;i++){
        int curr_val=arr[i];
        int j=i-1;
        while(j>=0 and arr[j]>curr_val){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr_val;
    }
}

int main() {
    int arr[] {8,5,7,3,2};
    int n=sizeof(arr)/sizeof(int);

    insertionSort(arr,n);
    cout << "sorted array : ";
    for(int i=0;i<n;i++) cout << arr[i] << " ";

    cout<<endl;
    return 0;
}
