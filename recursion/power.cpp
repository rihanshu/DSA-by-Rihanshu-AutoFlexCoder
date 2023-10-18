#include <iostream>
using namespace std;


int power2(int n){
   if(n==0){
    return 1;
   }
   return 2*power2(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<power2(n);
    return 0;
}