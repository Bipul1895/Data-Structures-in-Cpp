#include <iostream>
#include <vector>
using namespace std;

int quick_select(vector<int>& vec, int st, int ed){
    int ptr1=st+1;
    int ptr2=ed;
    int pivot=vec[st];

    while(ptr1 < ptr2){
        if(vec[ptr1]>pivot && vec[ptr2]<pivot){
            swap(vec[ptr1],vec[ptr2]);
            ptr1++;
            ptr2--;
        }
        else if(vec[ptr1]<pivot) ptr1++;
        else if(vec[ptr2]>pivot) ptr2--;
    }

    swap(vec[st], vec[ptr2]);
    return ptr2;

}

int main()
{
    vector< int > vec{3,8,5,6,7,1,4,2,9};
    int k=3;
    int st=0, ed=vec.size()-1;
    cout << quick_select(vec, st, ed);
    /*
    while(true){
        int index = quick_select(vec,st,ed);
        cout << index << " ";
        if(index == k-1) {
            cout << "Kth largest element : " << vec[index] << endl;
            break;
        }
        else if(index > k-1){
            ed=index-1;
        }
        else{
            st=index+1;
        }
    }
    */
    return 0;
}
