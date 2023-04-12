#include <bits/stdc++.h>

using namespace std;
class Stack{
public:
int size;
int top;
int *arr;
Stack(int size){
    this->size=size;
    arr=new int[size];
    top=-1;
}
void push(int elemnt){
    if(size-top>1){
        top++;
        arr[top]=elemnt;
    }
    else{
        cout<<"stack is overflow"<<endl;
    }
}
void pop(){
    if(top>=0){
        top--;
    }
    else{
        cout<<"stack is empty"<<endl;
    }
}
int peek(){
    if(top>=0){
       return arr[top];
    }
  return -1;
}
bool empty(){
    if(top!=-1){
        return true;
    }
    else{
        return false;
    }
}
};
int main(){
Stack s(3);
s.push(4);
s.push(5);
s.push(6);
cout<<s.peek()<<endl;
s.pop();
cout<<s.peek()<<endl; 
return 0;
}




//to solve 
/