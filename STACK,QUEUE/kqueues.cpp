#include <bits/stdc++.h>
using namespace std;
class Kqueue{
    int k;
    int n;
    int *arr;
    int *front;
    int *rear;
    int *next;
    int free;
public:
Kqueue(int n,int k){
    this->n=n;
    this->k=k;
    arr= new int[n];
    front=new int [k];
    rear=new int [k];
    next=new int [n];
    for(int i=0;i<k;i++){
        front[i]=-1;
        rear[i]=-1;
    }
    for(int i=0;i<n;i++){
        next[i]=i+1;
    }
    next[n-1]=-1;
    free=0;
}
void push(int k,int data){
    if(free==-1){
        cout<<"full"<<endl;
        return;
    }
    int index=free;
    free=next[index];
    if(front[k-1]==-1){
front[k-1]=index;
    }
    else{
        next[rear[k-1]]=index;
    }
    next[index]=-1;
    rear[k-1]=index;
    arr[index]=data;
}
int pop(int k){
    if(front[k-1]==-1){
        cout<<"Empty"<<endl;
        return -1;
    }
    int index=front[k-1];
    front[k-1]=next[index];
next[index]=free;
free=index;
return arr[index];
}
};
int main(){
Kqueue q(10,3);
q.push(1,10);
q.push(1,15);
q.push(2,20);
q.push(1,25);
cout<<q.pop(1)<<endl;
cout<<q.pop(2)<<endl;
cout<<q.pop(2)<<endl;
cout<<q.pop(1)<<endl;
return 0;
}