#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int low, int mid, int high) {
    vector<int> left;
    vector<int> right;

    for(int i=low;i<=mid;i++) left.push_back(arr[i]);
    for(int i=mid+1;i<=high;i++) right.push_back(arr[i]);

    int k=low;
    int i=0,j=0;

    while(i<left.size() and j<right.size()){
        if(left[i] <= right[j]){
            arr[k]=left[i];
            i++;
        }
        else{
            arr[k]=right[j];
            j++;
        }
        k++;
    }

    while (i<left.size()){
        arr[k]=left[i];
        i++;
        k++;
    }

    while (j<right.size()){
        arr[k]=right[j];
        j++;
        k++;
    }

    cout << low << " " << high << "\n";
    for(int i=low;i<=high;i++) cout << arr[i] << " ";
    cout << "\n====================\n";

}

void merge_sort(int arr[], int low, int high){
    if(low>=high) return;
    int mid=(low+high)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main() {
    int arr[] {8,2,9,6,5,3,7,4};
    int n=sizeof(arr)/sizeof(int);

    merge_sort(arr,0,n-1);
    for(int i=0;i<n;i++) cout << arr[i] << " ";

    cout << endl;
    return 0;
}
