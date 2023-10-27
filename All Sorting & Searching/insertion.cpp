// https://www.codingninjas.com/studio/problems/bubble-sort_980524

// In this we get an element one by one and then place it in its correct position to the left hand side.

#include<iostream>
using namespace std;

void insertion(int *arr,int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int temp = arr[i];
        while(j>=0){
            if(temp<arr[j]){
                arr[j+1]=arr[j];
                j--;
            }
            else{
                break;
            }
        }
                arr[j+1]=temp; //This is written here because after breaking we will come here and after loop is 
                // over i.e j<0 we will come here and put element at 0th index.
        
    }
}
int main(){

    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertion(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
