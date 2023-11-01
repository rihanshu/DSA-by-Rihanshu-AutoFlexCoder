// Find pivot position and select the pivot element from start.
// Place the pivot element to the right position
// then make sure all the elements left to it are smaller than pivot
// and all the elements to the right are bigger than pivot.

// https://www.codingninjas.com/studio/problems/quick-sort_983625?leftPanelTab=1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_15

#include<iostream>
using namespace std;

int position(int *arr , int n,int start,int end){
    int pivotele=arr[start];
    int count=0;
    for(int i=start+1;i<=end;i++){
        if(arr[i]<pivotele){
            count++;
        }
    }
    swap(arr[start],arr[start+count]);
    int pivotIndex=start+count;
    int i=start,j=end;
    while(i<pivotIndex && j >pivotIndex){
        while(arr[i]<pivotele){
            i++;
        }
        while(arr[j]>pivotele){
            j--;
        }
        if(i<pivotIndex && j >pivotIndex){
            swap(arr[i],arr[j]);
        }
    }
    // int j=start+count+1;
    // int i=start;
    // while(i<start+count){
    //     while(i<start+count){
    //         if(arr[i]>pivotele){
    //             break;
    //         }
    //         else{
    //             i++;
    //         }
    //     }
    //     if(i<start+count){

    //     while(j<=end){
    //         if(arr[j]<pivotele){
    //             break;
    //         }
    //         else{
    //             j++;
    //         }
    //     }

    //     swap(arr[i],arr[j]);
    //     }
    // }

    
    return pivotIndex;
}
void quickSort(int *arr,int n,int start , int end){
    int pivotPosition = position(arr,n,start,end);
    if(start>=end){
        return ;
    }
    quickSort(arr,n,start,pivotPosition-1);    
    quickSort(arr,n,pivotPosition+1,end);
}

int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0,end=n-1;
    quickSort(arr,n,start,end);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}