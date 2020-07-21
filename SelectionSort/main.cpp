#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int j=i,k=i;
        while(j<n){
            if(arr[j] < arr[k]){
                k=j;
            }
            j++;
        }
        swap(arr[i], arr[k]);
    }
}

int main() {
    int arr[] {8,6,3,2,5,4};
    int n=sizeof(arr)/sizeof(int);

    selectionSort(arr,n);
    cout << "Sorted array : ";
    for(int i=0;i<n;i++) cout << arr[i] << " ";

    cout<<endl;
    return 0;
}
