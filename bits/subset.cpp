#include <bits/stdc++.h>

using namespace std;
int main(){
int a[]={1,2,3};
vector<vector<int>> v;

for(int i=0;i<7;i++){
    vector<int> b;
    for(int j=0;j<3;j++){
        if(a[i]&(1<<j)){
            b.push_back(a[j]);
        }
        
    }
       v.push_back(b);
 
}
for(auto it:v){
    for(auto i:it){
        cout<<i<<" ";
    }
    cout<<endl;
}
return 0;
}