#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node*prev;
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
    ~Node(){
        int value=this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"MEMory free with node"<<value<<endl;
    }
};
void print(Node*head){
    Node*p=head;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
int getlenght(Node*head){
      Node*p=head;
      int len=0;
    while(p!=NULL){
        len++;
        p=p->next;
    }
    return len;
}
void insertathead(Node* &head,int data){
    Node*p=new Node(data);
p->next=head;
head->prev=p;
head=p;
}
void insertattail(Node*&tail,int data){
    Node*p=new Node(data);
    tail->next=p;
    p->prev=tail;
    tail=p;

}
void insertatpos(Node*&head,int pos,int data){
if(pos==1){
    insertathead(head,data);
    return;
}
else{
   
    Node*temp=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
     Node*tonode=new Node(data);
    tonode->next=temp->next;
    temp->next->prev=tonode;
    temp->next=tonode;
    tonode->prev=temp;

}
}
void deletenode(Node*&head,int pos){
    if(pos==1){
Node*temp=head;
temp->next->prev=NULL;
head=temp->next;
temp->next=NULL;
delete temp;
    }
    else{
        Node*p=head;
        Node*q=p->next;
        for(int i=1;i<pos-1;i++){
            p=p->next;
            q=q->next;
        }
        q->prev=NULL;
        p->next=q->next;
           q->next=NULL;
        p->next->prev=p;
     delete q;


    }

}
int main(){
Node*node1=new Node(10);
Node*head=node1;
Node*tail=node1;
//cout<<head->data<<endl;
insertathead(head,20);
insertattail(tail,40);
insertatpos(head,2,100);
deletenode(head,1);
print(head);
return 0;
}