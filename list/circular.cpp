// #include <bits/stdc++.h>

// using namespace std;
// class Node{
//     public:
//     int data;
//     Node*next;
//     Node(int d){
//         data=d;
//         this->next=NULL;
//     }
// };
// void insertnode(Node*&tail,int element,int data){
//     if(tail==NULL){
//         Node* newnode=new Node(data);
//         tail=newnode;
//         newnode->next=newnode;
//     }
//     else{
//         Node*curr=tail;
//         while(curr->data!=element){
//             curr=curr->next;
//         }
//         Node*temp=new Node(data);
// temp->next=curr->next;
// curr->next=temp;
//     }
// }
// void print(Node* tail){
//     Node*temp=tail;
// do{
//       cout<<tail->data<<" ";
//         tail=tail->next;
// }
//     while(tail!=temp);
// }
// bool iscircular(Node*head){
//     if(head==NULL){
//         return true;
//     }
//     Node*temp=head->next;
//     while(temp!=NULL&& temp!=head){
//       temp=temp->next;
//     }
//     if(temp==head){
//         return true;
//     }
//     return false;
// }
// bool isloop(Node*head){
//     if(head==NULL){
//         return true;
//     }
//     Node*temp=head;
//     map<Node*,bool>m;
//     while(temp!=NULL){
//         if(m[temp]==true){
//             return true;
//         }
//         m[temp]=true;
//         temp=temp->next;
//     }
//     return false;
// }
// // Node*ans;
// // Node* split(Node*head,Node*head1){
// //     Node*temp=head;
// //     int cnt=0;
// //     while(temp!=NULL){
// // cnt++;
// // temp=temp->next;
// //     }
// //         cout<<cnt<<endl;
// //     Node*curr=head;
// //     int mid=cnt/2;
// //     while(curr!=NULL &&mid>0){
// //      curr=curr->next;
// //      mid--;
// //     }
// //     ans=curr;

// //     cout<<curr->data<<endl;
// //     curr->next=head;
// //     return head;
// // }
// int main(){
// Node*tail=NULL;
// insertnode(tail,5,8);
// insertnode(tail,8,10);
// insertnode(tail,10,6);
// insertnode(tail,6,9);
// insertnode(tail,9,15);
// Node*head1=NULL;
// Node*head2=NULL;
// // if(isloop(tail)){
// //     cout<<"circular"<<endl;
// // }
// // else{
// //     cout<<"NON circullar"<<endl;
// // }
// // split(tail,head1);
// //  print(tail);
// // cout<<ans->data<<endl;
// return 0 ;
// }

#include<iostream>
#include<map>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //constrcutor
    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

    ~Node() {
        int value = this->data;
        if(this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

};

void insertNode(Node* &tail, int element, int d) {
    

    //empty list
    if(tail == NULL) {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        //non-empty list
        //assuming that the element is present in the list

        Node* curr = tail;

        while(curr->data != element) {
            curr = curr -> next;
        }
        
        //element found -> curr is representing element wala node
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;

    }

}    

void print(Node* tail) {

    Node* temp = tail;

    //empty list
    if(tail == NULL) {
        cout << "List is Empty "<< endl;
        return ;
    }

    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);

    cout << endl;
} 

void deleteNode(Node* &tail, int value) {

    //empty list
    if(tail == NULL) {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else{
        //non-empty

        //assuming that "value" is present in the Linked List
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        //1 Node Linked List
        if(curr == prev) {
            tail = NULL;
        }

        //>=2 Node linked list
        else if(tail == curr ) {
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;

    }

}

bool isCircularList(Node* head) {
    //empty list
    if(head == NULL) {
        return true;
    }

    Node* temp = head -> next;
    while(temp != NULL && temp != head ) {
        temp = temp -> next;
    }

    if(temp == head ) {
        return true;
    }

    return false;

}

bool detectLoop(Node* head) {

    if(head == NULL)
        return false;

    map<Node*, bool> visited;

    Node* temp = head;

    while(temp !=NULL) {

        //cycle is present
        if(visited[temp] == true) {
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;

    }
    return false;

}


int main() {

    Node* tail = NULL;

   insertNode(tail, 5, 3);
    print(tail);

   insertNode(tail, 3, 5);
   print(tail);


    insertNode(tail, 5, 7);
    print(tail);

    insertNode(tail, 7, 9);
    print(tail);

    insertNode(tail, 5, 6);
    print(tail);
    
    insertNode(tail, 9, 10);
    print(tail);

    insertNode(tail, 3, 4);
    print(tail);
   

    deleteNode(tail, 5);
    print(tail);


    if(isCircularList(tail)) {
        cout << " Linked List is Circular in nature" << endl;
    }
    else{
        cout << "Linked List is not Circular " << endl;
    }

    return 0;
}