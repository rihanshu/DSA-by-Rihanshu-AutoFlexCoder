#include<iostream>
#include<limits.h>
using namespace std;


void minmax(int arr[] ,int num){
    int maximum=INT_MIN;
    int minimum=INT_MAX;
    for(int i=0;i<num;i++){
        if(arr[i]>maximum){
            maximum=arr[i];

        }
        if(arr[i]<minimum){
            minimum=arr[i];
        }

    }
    cout<<"Minimum Element is "<<minimum<<endl;
    cout<<"Maximum Element is "<<maximum<<endl;


}
int main(){
    int n,*arr;
    cin>>n;
    arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    minmax(arr,n);

    return 0;

}

