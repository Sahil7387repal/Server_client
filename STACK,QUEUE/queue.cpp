#include <bits/stdc++.h>

using namespace std;
class Queue{
int size;
int front;
int rear;
int *arr;
public:
Queue(int size){
    this->size=size;
arr=new int [size];
front=0;
rear=0;
}
bool empty(){
    if(rear==front){
        return true;
    }
    else{
        return false;
    }
}
void push(int data){
if(rear==size){
    cout<<"full"<<endl;
}
else{
    arr[rear]=data;
    rear++;
}
}
int pop(){
    if(rear==front){
        cout<<"empty"<<endl;
    }
    else{
        int ans=arr[front];
        arr[front]=-1;
        front++;
        if(front==rear){
            front=0;
            rear=0;
        }
        return ans;
    }
    return 0;
}
int qfront(){
    if(rear==front){
        return -1;
    }
    else{
        int ans=arr[front];
        return ans;
    }
}
};
int main(){
Queue q(3);
q.push(4);
q.push(5);
q.push(6);
cout<<q.pop();
// while(!q.empty()){
//     cout<<q.qfront()<<endl;
//     q.pop();
// }
return 0;
}