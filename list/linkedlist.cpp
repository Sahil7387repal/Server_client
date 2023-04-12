#include <bits/stdc++.h>

using namespace std;
struct Node{
    int data;
     struct Node*next;
};
void cirdisplay(struct Node*last){
struct Node*p;
p=last->next;
while(last!=NULL){
cout<<p->data<<" ";
last=last->next;
p=last->next;
// p=p->next;
}
  
}
// void display(struct Node*p){
//     while(p!=NULL){
//         cout<<p->data<<" ";
//         p=p->next;
//     }
//     cout<<endl;
// }
// struct Node*insertAtbegin(struct Node*head,int element){
// struct Node*ptr=new Node;
// ptr->data=element;
// ptr->next=head;
// return ptr;
// }
// struct Node*atindex(struct Node*head,int index,int element){
//     struct Node*ptr=new Node;
//     struct Node*p=head;
//     for(int i=0;i<index-1;i++){
//         p=p->next;
//     }
//     ptr->data=element;
// ptr->next=p->next;
// p->next=ptr;
//         return head;
// }
// struct Node*atend(struct Node*head,int element){
//     struct Node*ptr=new Node;
//     struct Node*p=head;
// while(p->next!=NULL){
//     p=p->next;
// }
// ptr->data=element;
// ptr->next=NULL;
// p->next=ptr;
// return head;
// }
// struct Node*atnode(struct Node*head,struct Node*prev,int element){
// struct Node*ptr=new Node;
// ptr->data=element;
// ptr->next=prev->next;
// prev->next=ptr;
// return head;
// }
// struct Node*deleteatbegin(struct Node*head){
//     struct Node*p=head;
//     head=head->next;
//     free(p);
//     return head;
// }
// struct Node*deleteatindex(struct Node*head,int index){
//     struct Node*p=head;
//     struct Node*q=p->next;
//     for(int i=0;i<index-1;i++){
//         p=p->next;
//         q=q->next;
//     }
//     p->next=q->next;
//     free(q);
//     return head;
// }
int main(){
struct Node*head= new Node;
Node*second=new Node;
Node*third=new Node;
Node*fourth=new Node;
head->data=45;
head->next=second;
second->data=46;
second->next=third;
third->data=47;
third->next=fourth;
fourth->data=48;
fourth->next=NULL;
// display(head);
// head=insertAtbegin(head,49);
//head=atnode(head,second,49);
// head=deleteatindex(head,2);
// display(head);

return 0;
}