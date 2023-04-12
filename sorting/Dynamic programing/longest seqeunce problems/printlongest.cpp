// #include <bits/stdc++.h>

// using namespace std;
// vector<string> v;
// string print(string a,string b,int n,int m){
//     int dp[n+1][m+1];
// int i=n,j=m;
// string s="";

// while(i>0 &&j>0){
//     if(a[i-1]==b[j-1]){
// s.push_back(a[i-1]);
// i--;j--;
//     }
//     else{
//       if(dp[i][j-1]>dp[i-1][j]){
//         j--;
//       }
//       else{
//         i--;
//       }
//     }
// }
// reverse(s.begin(),s.end());
//  return s;
// }

// int main(){
// string a="acbcf";
// int n=a.size();
// string b= "abcdaf";
// int m=b.size();

// cout<<print(a,b,n,m);

// return 0;
// }

//shortest common supersquence
// #include <bits/stdc++.h>

// using namespace std;
// int print(string a,string b,int n,int m){
//     int dp[n+1][m+1];
//     for(int i=0;i<n+1;i++){
//         for(int j=0;j<m+1;j++){
//             if(i==0 ||j==0){
//                 dp[i][j]=0;
//             }
//         }
//     }
//     for(int i=1;i<n+1;i++){
//         for(int j=1;j<m+1;j++){
//             if(a[i-1]==b[j-1]){
//                 dp[i][j]=1+dp[i-1][j-1];
//             }
//             else {
//                 dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
//             }
//         }
//     }
//     return (dp[n][m]);
//     }

//     //minimum no of elements of dlt or insert to make a is equal to b;
//     int make(string a,string b,int n,int m){
//     int dp[n+1][m+1];
//     for(int i=0;i<n+1;i++){
//         for(int j=0;j<m+1;j++){
//             if(i==0 ||j==0){
//                 dp[i][j]=0;
//             }
//         }
//     }
//     for(int i=1;i<n+1;i++){
//         for(int j=1;j<m+1;j++){
//             if(a[i-1]==b[j-1]){
//                 dp[i][j]=1+dp[i-1][j-1];
//             }
//             else {
//                 dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
//             }
//         }
//     }
//     return (dp[n][m]);
//     }
//     //longest common palindromic subsequence
//      int palindrome(string a,string b,int n,int m){
//     int dp[n+1][m+1];
//     for(int i=0;i<n+1;i++){
//         for(int j=0;j<m+1;j++){
//             if(i==0 ||j==0){
//                 dp[i][j]=0;
//             }
//         }
//     }
//     for(int i=1;i<n+1;i++){
//         for(int j=1;j<m+1;j++){
//             if(a[i-1]==b[j-1]){
//                 dp[i][j]=1+dp[i-1][j-1];
//             }
//             else {
//                 dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
//             }
//         }
//     }
//     return (dp[n][m]);
//     }
// int main(){
// // 1)string a="AGGTAB";
// // string b="GXTXAYB";
// // 2)string a="heap";
// // string b="pea";
// // int x=make(a,b,n,m);
// // cout<<(n+m)-x<<endl;
// // cout<<"deleteation :"<<n-x<<"insertion:"<<m-x<<endl;
// string a="agbcba";
// string b=a;
// reverse(b.begin(),b.end());

// int n=a.size();
// int m=b.size();
// cout<<n-palindrome(a,b,n,m)<<endl;
// return 0;
// }

//print a supersequence 
// #include <bits/stdc++.h>

// using namespace std;
// string print(string a,string b,int n,int m){
//     int dp[n+1][m+1];
// int i=n,j=m;
// string s="";

// while(i>0 &&j>0){
//     if(a[i-1]==b[j-1]){
// s.push_back(a[i-1]);
// i--;j--;
//     }
//     else{
//       if(dp[i][j-1]>dp[i-1][j]){
//         s.push_back(b[j-1]);
//         j--;
//       }
//       else{
//         s.push_back(a[i-1]);
//         i--;
//       }
//     }
// }
// while(i>0){
//     s.push_back(b[j-1]);
//     i--;
// }
// while(j>0){
//     s.push_back(a[i-1]);
//     j--;
// }
// reverse(s.begin(),s.end());
//  return s;
// }
// int main(){
// string a= "abcdaf";
// string b= "acbcf";
// int n=a.size();
// int m=b.size();
// cout<<print(a,b,n,m)<<endl;
// return 0;
// }


//longest repeating subsequence
// #include <bits/stdc++.h>

// using namespace std;
// int solve(string a,string b,int n,int m){
//     int dp[n+1][m+1];
//     for(int i=0;i<n+1;i++){
//         for(int j=0;j<m+1;j++){
//             if(i==0 ||j==0){
//                 dp[i][j]=0;
//             }
//         }
//     }
// for(int i=1;i<n+1;i++){
//     for(int j=1;j<m+1;j++){
//         if(a[i-1]==b[j-1] &&i!=j){
// dp[i][j]=1+dp[i-1][j-1];
//         }
//         else{
//             dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
//         }
// }
// }
//     return dp[n][m];
// }
// int main(){
// string a="aabebcdd";
// string b="aabebcdd";
// int n=a.size();
// int m=b.size();
// cout<<solve(a,b,n,m)<<endl;
// return 0;
// }

//is one string is a subsequence is of other
#include <bits/stdc++.h>

using namespace std;
int solve(string a,string b,int n,int m){
    int dp[n+1][m+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            if(i==0 ||j==0){
                dp[i][j]=0;
            }
        }
    }
for(int i=1;i<n+1;i++){
    for(int j=1;j<m+1;j++){
        if(a[i-1]==b[j-1]){
dp[i][j]=1+dp[i-1][j-1];
        }
        else{
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
}
}
    return dp[n][m];
}
int main(){
string a="axy";
string b="adxcp";
int n=a.size();
int m=b.size();
int x=solve(a,b,n,m);
if(x==n){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
return 0;
}