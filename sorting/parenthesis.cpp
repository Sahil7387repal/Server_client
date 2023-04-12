// #include <bits/stdc++.h>

// using namespace std;
// int main(){
//     string s;
//     cin>>s;
// map<char,int>m={{'(',-1},{')',1}};
// stack<int> st;
// for(auto it:s){
//     if(m[it]<0){
// st.push(it);
//     }
//     else{
//         if(st.empty()){
//             cout<<"NO"<<endl;
//         }
//         char top=st.top();
//         st.pop();
//         if(m[it]+m[top]!=0){
//             cout<<"NO"<<endl;
//         }
//     }
// }
//     if(st.empty()){
//         cout<<"YEs"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }

// return 0;
// }
#include <bits/stdc++.h>

using namespace std;
int main(){
    vector<int> a={2,1,3};
vector<int> v={1,2,3};
int k=0;
v.erase(v.begin()+k);
for(auto it:v){
    cout<<it<<endl;
}
return 0;
}