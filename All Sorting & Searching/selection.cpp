// https://www.codingninjas.com/studio/problems/selection-sort_981162?leftPanelTab=1


#include<iostream>
using namespace std;

void selection(int *arr,int n){
    for(int i=0;i<n-1;i++){
        int min=arr[i];
        int k=i;
        for(int j=i+1;j<n;j++){
            if(min>arr[j]){
                min=arr[j];
                k=j;
            }
        }
        swap(arr[i],arr[k]);

    }
}
int main(){

    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
