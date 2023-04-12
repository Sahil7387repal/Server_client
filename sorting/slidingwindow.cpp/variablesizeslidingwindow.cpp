//longest  subbarray of sum k;
#include <bits/stdc++.h>

using namespace std;
int main(){
int n,k;
cin>>n>>k;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int i=0,j=0,sum=0,mx=INT_MIN;
// while(j<n){
//     sum+=a[j];
//     if(sum<k){
//         j++;
//     }
//     else if(sum==k){
// mx=max(mx,j-i+1);
// j++;
//     }
//     else if(sum>k){
//         while(sum>k){
//             sum=sum-a[i];
//             i++;
//         }
//         j++;
//     }
// }
// this is also valid for all test cases
        sum += nums[end];            
            while(sum > (s - x)){
                sum -= nums[st]; //Reducing window size
                st++;
            }            
            if(sum == s - x){
                ans = min(ans, n - (end - st + 1));
            }            
            end++; 
cout<<mx<<endl;
return 0;
}

//longest substring of k unique charcgters
// #include <bits/stdc++.h>

// using namespace std;
// int main(){
// string s;
// cin>>s;
// int n=s.size();
// int k=3;
// int i=0,j=0,mx=INT_MIN;
// unordered_map<char,int> m;
// while(j<n){
//     m[s[j]]++;
//     if(m.size()<k){
//         j++;
//     }
//     else if(m.size()==k){
//         mx=max(mx,j-i+1);
//         j++;
//     }
//     else if(m.size()>k){
//         while(m.size()>k){
//             m[s[i]]--;
          
//             if(m[s[i]]==0){
//                 m.erase(s[i]);
//             }
//            i++;
//         }
//         j++;
//     }
// }
// cout<<mx<<endl;
// return 0;
// }

//lomgets substring of all unique charachters
// #include <bits/stdc++.h>

// using namespace std;
// int main(){
// string s;
// cin>>s;
// int n=s.size();
unordered_map<char,int> m;
int i=0,j=0,mx=INT_MIN;
while(j<n){
// m[s[j]]++;
if(m.size()==j-i+1){
    mx=max(mx,j-i+1);
    j++;
}
else if(m.size()<j-i+1){
    while(m.size()<j-i+1){
        m[s[i]]--;
        if(m[s[i]]==0){
            m.erase(s[i]);
        }
        i++;
            }
            j++;
}
}
// cout<<mx<<endl;
// return 0;
// }
  

  //pick toys
//   #include <bits/stdc++.h>
  
//   using namespace std;
//   int main(){
//   string s;
//   cin>>s;
//   int i=0,j=0,mx=0;
//   int n=s.size();
//   unordered_map<char,int> m;
//   while(j<n){
//     m[s[j]]++;
//     if(m.size()<2){
//         j++;
//     }
//     else if(m.size()==2){
//         mx=max(mx,j-i+1);
//         j++;
//     }
//     else if(m.size()>2){
//         while(m.size()>2){
//         m[s[i]]--;
//         if(m[s[i]]==0){
// m.erase(s[i]);
//         }
//         i++;
//         }
//         j++;
//     }
//   }
// cout<<mx<<endl;
//   return 0;
//   }
