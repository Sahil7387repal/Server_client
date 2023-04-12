// #include <bits/stdc++.h>

// using namespace std;
// void print(int n){
//     if(n==0){
//         return;
//     }
//     cout<<n<<endl;
// print(n-1);

// }
// int main(){
// int n;
// cin>>n;
// print(n);
// return 0;
// }
// #include <bits/stdc++.h>

// using namespace std;
// void insert(vector<int> &v,int temp){
//     if(v.size()==0 ||v[v.size()-1]<=temp){
//         v.push_back(temp);
//         return;
//     }
//     int val=v[v.size()-1];
//     v.pop_back();
//     insert(v,temp);
//     v.push_back(val);
// }
// void sort(vector<int> &v){
//     if(v.size()==1){
//         return;
//     }
//     int val=v[v.size()-1];
//     v.pop_back();
// sort(v);
// insert(v,val);
// }
// int main(){
// int n;
// cin>>n;
// vector<int> v(n);
// for(int i=0;i<n;i++){
//     cin>>v[i];
// }
// sort(v);
// for(auto it:v){
//     cout<<it<<" ";
// }
// return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// #define pb push_back
// #define eb emplace_back
// #define ll long long int
// #define all(x) x.begin(),x.end()

// void insertion(stack<int>&s, int temp)
// {
//     if (s.size() == 0 || s.top() >= temp)
//     {
//         s.push(temp);
//         return;
//     }
//     int x = s.top();
//     s.pop();
//     insertion(s, temp);
//     s.push(x);

// }
// void sorting(stack<int>&s)
// {
//     if (s.size() == 1)
//     {
//         return ;
//     }
//     int temp = s.top();
//     s.pop();
//     sorting(s);
//     insertion(s, temp);

// }



// int main()
// {
//     stack<int>s;
//     s.push(5);
//     s.push(2);
//     s.push(1);
//     s.push(7);
//     s.push(3);
//     sorting(s);

//     int t = s.size();

//     for (int i = 0; i < t; i++)
//     {
//         cout << s.top() << " ";
//         s.pop();
//     }
//     return 0;
// }


// delete the middle element in a stack
// #include <bits/stdc++.h>

// using namespace std;

// void removeM(stack<int>&stk,int k){
//     if(stk.size()==k){
//         stk.pop();
//         return ;
//     }
//     int temp = stk.top();
//     stk.pop();
//     removeM(stk,k);
//     stk.push(temp);
// }
// int main(){
// stack<int> s;
//     s.push(5);
//     s.push(2);
//     s.push(1);
//     s.push(7);
//     s.push(3);
//     int t=s.size();
//     int k=(t/2)+1;
//     removeM(s,k);
//     for(int i=0;i<t;i++){
//         cout<<s.top()<<endl;
//         s.pop();
//     }
// return 0;
// }

//reverse a stack

// #include <bits/stdc++.h>

// using namespace std;
// void insert(stack<int> &s,int temp){
//     if(s.size()==0){
//         s.push(temp);
//         return;
//     }
//     int x=s.top();
//     s.pop();
//     insert(s,temp);
//     s.push(x);
// }
// void reverse(stack<int> &s){
//     if(s.size()==1){
//         return;
//     }
//     int x=s.top();
//     s.pop();
//     reverse(s);
//     insert(s,x);
// }
// int main(){
// stack<int> s;
//     s.push(5);
//     s.push(2);
//     s.push(1);
//     s.push(7);
//     s.push(3);
//     int t=s.size();
// reverse(s);
//     for(int i=0;i<t;i++){
//         cout<<s.top()<<endl;
//         s.pop();
//     }
// return 0;
// }
