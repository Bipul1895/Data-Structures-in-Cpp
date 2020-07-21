#include <iostream>
using namespace std;

void quickSortUtil(int arr[], int st, int ed) {
    if(st>=ed) return;
    int pivot=st;
    int pivot_ele=arr[pivot];

    int i=st+1,j=ed;

    while(i<=j){
        if(arr[i]>pivot_ele and arr[j]<=pivot_ele){//in the second condition <= is very important
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else if(arr[j]>pivot_ele){
            j--;
        }
        else {// arr[i] < pivot_ele
            i++;
        }
    }

    swap(arr[pivot], arr[j]);
    int partition_index=j;

    quickSortUtil(arr,st,partition_index-1);
    quickSortUtil(arr,partition_index+1,ed);
}

void quickSort(int arr[], int n) {
    quickSortUtil(arr,0,n-1);
}

void randomizedQuickSortUtil(int *arr, int st, int ed) {
    if(st>=ed) return;
    int pivot=ed%(ed-st+1) + st;//set pivot to a random index b/w st and ed
    swap(arr[st], arr[pivot]);//swap pivot index with st index
    pivot=st;//pivot element is now at the beginning of the array
    int pivot_ele=arr[pivot];

    int i=st+1,j=ed;

    while(i<=j){
        if(arr[i]>pivot_ele and arr[j]<=pivot_ele){//in the second condition <= is very important
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else if(arr[j]>pivot_ele){
            j--;
        }
        else {// arr[i] < pivot_ele
            i++;
        }
    }

    swap(arr[pivot], arr[j]);
    int partition_index=j;

    randomizedQuickSortUtil(arr,st,partition_index-1);
    randomizedQuickSortUtil(arr,partition_index+1,ed);

}

void randomizedQuickSort(int arr[], int n){
    randomizedQuickSortUtil(arr,0,n-1);
}

int main() {
    int arr[] {50,70,60,90,40,80,10,20,30};
    int n=sizeof(arr)/sizeof(int);

    randomizedQuickSort(arr,n);
    cout << "Sorted array : ";
    for(int i=0;i<n;i++) cout << arr[i] << " ";

    cout << endl;
    return 0;
}
