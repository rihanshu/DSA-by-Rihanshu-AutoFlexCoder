#include<iostream>
using namespace std;

int fact(int n){
    int factorial=1;
    while(n>0){
        factorial=n*factorial;
        n--;
    }
    return factorial;
}
int main(){
    int n,r;
    cin>>n>>r;
    float combination = fact(n)/(fact(n-r)*fact(r));
    float permutation = fact(n)/fact(n-r);
    cout<<"nCr = "<<combination<<endl<<"nPr = "<<permutation;
    return 0;
}