#include <iostream>
using namespace std;


void oneton(int n){
   if(n==0){
    return ;
   }
   oneton(n-1);
   cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    oneton(n);
    return 0;
}