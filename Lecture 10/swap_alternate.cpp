#include<iostream>
using namespace std;

void swapAlternate(int *arr,int n){
    int i=0;
    while(i<n-1){
        swap(arr[i],arr[i+1]);
        i=i+2;
    }
    }
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    swapAlternate(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}