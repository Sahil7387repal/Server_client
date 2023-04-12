// #include <bits/stdc++.h>

// using namespace std;
// class Node{
//     public:
//     int data;
//     Node*next;
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
// void display(Node*head){
//     Node*p=head;
//     while(p!=NULL){
//         cout<<p->data<<" ";
//         p=p->next;
//     }
//     cout<<endl;
// }
// void insertathead(Node* &head,int data){
// Node*temp=new Node(data);
// temp->next=head;
// head=temp;

// }
// void insertatend(Node*head,int data){
//     Node*temp=new Node(data);
//     Node*p=head;
//     while(p->next!=NULL){
//         p=p->next;
// //     }
// //     p->next=temp;
// // }
// void insertattail(Node* &tail,int data){
//     Node*temp=new Node(data);
//     tail->next=temp;
//     tail=temp;
// }
// void insertatpos(Node*head,int pos,int data){
//      if(pos==1){
//     insertathead(head,data);
//     return;
//  }
//  Node*p=head;
//  Node*temp=new Node(data);

//  for(int i=1;i<pos-1;i++){
// p=p->next;
//  }
//  temp->next=p->next;
//  p->next=temp;
// }
// int main(){
// Node*Node1= new Node(11);
// // Node*head=tail;

// // insertattail(tail,34);
// // insertattail(tail,50);
// Node*head=Node1;
// Node*tail=head;
// int a[3]={20,40,60};
//  for(int i=0;i<3;i++){
//      insertathead(head,a[i]);
//  }
//  insertatpos(head,1,100);
// display(head);
// return 0;
// }

//*********************************************************************************************
#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void display(Node *head)
{
    Node *p = head;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}
void insertathead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
void insertattail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
void insertatpos(Node *&head, int pos, int data)
{
    if (pos == 1)
    {
        insertathead(head, data);
        return;
    }
    Node *p = head;

    for (int i = 1; i < pos - 1; i++)
    {
        p = p->next;
    }
    Node *temp = new Node(data);
    temp->next = p->next;
    p->next = temp;
}
void deletenode(Node *&head, int pos)
{
    if (pos == 1)
    {
        Node *p = head;
        head = head->next;
        delete p;
    }
    else
    {
        Node *p = head;
        Node *q = p->next;
        for (int i = 1; i < pos - 1; i++)
        {
            p = p->next;
            q = q->next;
        }
        p->next = q->next;
        delete q;
    }
}
bool iscircular(Node*head){
    if(head==NULL){
        return true;
    }
    Node*temp=head->next;
    while(temp!=NULL&& temp!=head){
      temp=temp->next;
    }
    if(temp==head){
        return true;
    }
    return false;
}
bool isloop(Node*head){
    if(head==NULL){
        return true;
    }
    Node*temp=head;
    map<Node*,bool>m;
    while(temp!=NULL){
        if(m[temp]==true){
            return true;
        }
        m[temp]=true;
        temp=temp->next;
    }
    return false;
}
  Node* mergeTwoLists(Node* list1, Node* list2) {
        if (!list1)
            return list2;
        if (!list2)
            return list1;
        Node *ans = new Node(-1);
        Node *temp = ans;
        
        while (list1 && list2)
        {
            if (list1->data< list2->data)
            {
                temp -> next = list1;
                temp = list1;
                list1 = list1 -> next;
            }
            else 
            {
                temp -> next = list2;
                temp = list2;
                list2 = list2 -> next;
            }
        } 
            while (list1)
            {
                temp -> next = list1;
                temp = list1;
                list1 = list1 -> next;
            }
            while (list2) 
            {
                temp -> next = list2;
                temp = list2;
                list2 = list2 -> next;
            }
        
            return ans -> next;
        
    }
int main()
{
    Node *tail = new Node(11);
    Node *head = tail;
 
    Node *tail1=new Node(13);
       Node *head1=tail1;
    insertattail(tail, 34);
    insertattail(tail, 50);
     insertattail(tail, 60);
     
        insertattail(tail1, 55);
            insertattail(tail1, 30);
                insertattail(tail1, 70);
    // insertatpos(head, 1, 100);
    // insertathead(head,100);
    // cout << head->data << endl;
    // cout << tail->data << endl;
// if(isloop(tail)){
//     cout<<"circular"<<endl;
// }
// else{
//     cout<<"NON circullar"<<endl;
// }
//     // deletenode(head,1);
    mergeTwoLists(head,head1);
    display(head);
    display(head1);

    return 0;
}