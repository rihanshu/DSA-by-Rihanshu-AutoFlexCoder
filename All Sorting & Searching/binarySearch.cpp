// Elements are arranged in already sorted fashion 
// either ascending or descending.

#include<iostream>
using namespace std;


int search(int *arr, int start ,int end,int key){
    if(start>end){
        return -1;
    }
    // int mid = (start+end)/2;
    int mid = start + (end - start)/2;
    //base case
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        // end=mid-1;
        return search(arr,start,mid-1,key);
    }
    else{
        // start=mid+1;
        return search(arr,mid+1,end,key);
    }
}
int main(){
    int n,key;
    cin>>n>>key;
    int start=0;
    int end=n-1;
    int *arr= new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int index = search(arr,start,end,key);
    if(index==-1){
        cout<<"Element "<<key<<" is not found" <<endl;
    }
    else{
        cout<<"Element "<<key<<" found at index "<<index<<endl;
    }
    return 0;
}