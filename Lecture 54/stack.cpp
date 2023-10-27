// // https://www.codingninjas.com/studio/problems/two-stacks_983634?leftPanelTab=0&campaign=YouTube_CodestudioLovebabbar5thfeb&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_CodestudioLovebabbar5thfeb

//Implement Stack using linklist. Homework...

// #include<iostream>
// using namespace std;

// class Stack{
//     public:
//         int top;
//         int size;
//         int *arr;

//         //Constructor
//         Stack(int size){
//             this->size=size;
//             this->top=-1;
//             this->arr=new int[size];
//         }

//         //push
//         void push(int element){
//             if(top>=size-1){
//                 cout<<"Stack Overflow"<<endl;
//             }
//             else{
//                 top++;
//                 arr[top]=element;
//             }
//         }
//         void pop(){
//             if(top==-1){
//                 cout<<"Stack Underflow"<<endl;
//             }
//             else{
//                 top--;
//             }
//         }
//         void peek(){
//             if(top==-1){
//                 cout<<"Stack Empty"<<endl;
//             }
//             else{
//                 cout<<"Element at top is: "<<arr[top]<<endl;
//             }
//         }

//         bool empty(){
//             if(top==-1){
//                 return true;
//             }
//             else{
//                 return false;
//             }
//         }


// };
//     int main(){
//             int size;
//             cin>>size;
//             Stack s(size);
//             s.push(11);
            
//             if(s.empty()){
//                 cout<<"Stack is empty"<<endl;
//             }
//             else{
//                 cout<<"Stack is not empty"<<endl;
//             }
//             // s.push(22);
//             // s.push(33);
//             // s.push(44);
//             // s.push(55);
//             s.peek();
//             s.pop();
//                s.peek();
//             return 0;
//         }


// using STL
#include<iostream>
using namespace std;
#include<stack>

int main(){
    stack<int>s;
    s.push(7);
    cout<<s.size();
       cout<<s.empty();
    cout<<endl<<s.top();
    s.pop();
    
    // cout<<endl<<s.top();

    cout<<s.empty();
    s.top();
    return 0;
}
