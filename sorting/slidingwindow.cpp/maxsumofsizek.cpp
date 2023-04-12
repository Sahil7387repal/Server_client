
// to find max sum or min sum in a given subarray or substring k is the lenght of subbarray
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// int n,k;
// cin>>n>>k;
// int a[n];
// for(int i=0;i<n;i++){
//     cin>>a[i];
// }
// int i=0,j=0,sum=0,mx=INT_MAX;
// while(j<n){
// sum+=a[j];
// if(j-i+1<k){
//     j++;
// }
// else if(j-i+1==k){
//     mx=min(mx,sum);
//     sum=sum-a[i];
//     i++;j++;
// }
// }
// cout<<mx<<endl;
// return 0;
// }

//first negative element in given subarray
// #include <bits/stdc++.h>

// using namespace std;
// int main(){
// int n,k;
// cin>>n>>k;
// int a[n];
// for(int i=0;i<n;i++){
//     cin>>a[i];
// }
// int i=0,j=0;
// list<int> v;
// vector<int>ans;
// while(j<n){
//     if(a[j]<0){
//         v.push_back(a[j]);
//     }
//     if(j-i+1<k){
//       j++;
//     }
//     else if(j-i+1==k){
//         if(v.size()==0){
//             ans.push_back(0);
//         }
//         else{
//         ans.push_back(v.front());
//         }
//         if(a[i]<0){
// v.pop_front();
//         }
//         i++;j++;
     
//     }
   
// }
// for(auto it:ans){
//     cout<<it<<endl;
// }
// return 0;
// }


// count the no of anagrams in a other string of one pattern
#include <bits/stdc++.h>

using namespace std;
int main(){
string s,p;
cin>>s>>p;
unordered_map<char,int> m;
for(auto &it:p){
    m[it]++;
}
int i=0,j=0,count=m.size(),ans=0,k=p.size();
while(j<s.size()){
 
    if(m.find(s[j])!=m.end()){
        m[s[j]]--;
        if(m[s[j]]==0){
            count--;
        }
    }
    if(j-i+1<k){
        j++;
    }
    else if(j-i+1==k){
        if(count==0){
        
            ans++;
        }
        if(m.find(s[i])!=m.end()){
            m[s[i]]++;
            if(m[s[i]]==1){
                count++;
            }
        }
        i++;j++;

    }
}
cout<<ans<<endl;
return 0;
}

