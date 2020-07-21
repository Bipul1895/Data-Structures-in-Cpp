#include <iostream>
#include <climits>
#include <vector>

using namespace std;

int findMax(int arr[], int n) {
    int maxx=0;
    for(int i=0;i<n;i++){
        maxx=max(maxx, arr[i]);
    }
    return maxx;
}

void CountSort(int arr[], int n){
    int maxx=findMax(arr,n);
    vector<int> count(maxx+1, 0);
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    int k=0;
    for(int i=0;i<maxx+1;i++){
        while(count[i] > 0){
            arr[k]=i;
            count[i]--;
            k++;
        }
    }
}

int main() {
    int arr[] {11,13,7,12,16,9,24,5,10,3};
    int n=sizeof(arr)/sizeof(int);

    CountSort(arr,n);

    for(int i=0;i<n;i++) cout << arr[i] << " ";

    cout << endl;
    return 0;
}
