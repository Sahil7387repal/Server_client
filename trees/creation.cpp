#include <bits/stdc++.h>
    int ans=0;
using namespace std;
class  Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
Node *create(Node*root){
cout<<"enter the data:"<<endl;
int data;
cin>>data;
root=new Node(data);
if(data==-1){
    return NULL;
}
cout<<"enter the left data to:"<<data<<endl;
root->left=create(root->left);
cout<<"enter the right data to:"<<data<<endl;
root->right=create(root->right);
}
void levelorder(Node*root){
  queue<Node*>q;
  q.push(root);
  q.push(NULL);
  while(!q.empty()){
    Node*temp=q.front();
q.pop();
    if(temp==NULL){

cout<<endl;
if(!q.empty()){
    q.push(NULL);
}
    }
    else{
        cout<<temp->data<<" ";
        if(temp->left){
           q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }

    }
  }
}
void inorder(Node*root){
    if(root==NULL){
        ans++;
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(Node*root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node*root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}
void buildfromLevel(Node*&root){
    queue<Node*>q;
    cout<<"enter the data for root"<<endl;
    int data;
    cin>>data;
    root=new Node(data);

    q.push(root);
    while(!q.empty()){
        Node*temp=q.front();
        q.pop();
        cout<<"left data for"<<temp->data<<endl;
        int ldata;
        cin>>ldata;
        if(ldata!=-1){
            temp->left=new Node(ldata);
            q.push(temp->left);
        }
         cout<<"right data for"<<temp->data<<endl;
        int rdata;
        cin>>rdata;
        if(rdata!=-1){
            temp->right=new Node(rdata);
            q.push(temp->right);
        }

    }
}
int main(){

Node*root=NULL;
// root=create(root);


// cout<<endl;
// preorder(root);
// cout<<endl;
// postorder(root);
buildfromLevel(root);
// levelorder(root);
inorder(root);
cout<<ans<<endl;
return 0;
}