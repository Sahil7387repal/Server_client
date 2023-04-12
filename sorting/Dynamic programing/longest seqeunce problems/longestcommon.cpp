// #include <bits/stdc++.h>

// using namespace std;
// int dp[100][100];
// int lcs(string a,string b,int n,int m){
//     if(n==0||m==0){
//         return 0;
//     }
//     if(dp[n][m]!=-1){
//         return dp[n][m];
//     }
//     if(a[n-1]==b[m-1]){
//         return dp[n][m]= 1+lcs(a,b,n-1,m-1);
//     }
//     else{
//         return dp[n][m]=  max(lcs(a,b,n-1,m),lcs(a,b,n,m-1));
//     }
//     }
// int main(){
//     memset(dp,-1,sizeof(dp));
// string a="AGGTAB";
// int n=a.size();
// string b= "GXTXAYB";
// int m=b.size();
// cout<<lcs(a,b,n,m);
// return 0;
// }


//longest common subsequence
// #include <bits/stdc++.h>

// using namespace std;
// int lcs(string a,string b,int n,int m){
//     int dp[n+1][m+1];
//     for(int i=0;i<n+1;i++){
//         for(int j=0;j<m+1;j++){
//             if(i==0||j==0){
//                 dp[i][j]=0;
//             }
//         }
//     }
//     for(int i=1;i<n+1;i++){
//         for(int j=1;j<m+1;j++){
//             if(a[i-1]==b[j-1]){
//                 dp[i][j]=1+dp[i-1][j-1];
//             }
//             else{
//                 dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
//             }
//         }
//     }
//     return dp[n][m];
// }
// int main(){
// string a="AGGTAB";
// int n=a.size();
// string b= "GXTXAYB";
// int m=b.size();
// cout<<lcs(a,b,n,m);
// return 0;
// }


//longest common sustring

// #include <bits/stdc++.h>

// using namespace std;
// int solve(string a,string b,int n,int m){
//     int dp[n+1][m+1];
//     for(int i=0;i<n+1;i++){
//         for(int j=0;j<m+1;j++){
//             if(i==0||j==0){
//                 dp[i][j]=0;
//             }
//         }
//     }
//     int mx=0;
//     for(int i=1;i<n+1;i++){
//         for(int j=1;j<m+1;j++){
//             if(a[i-1]==b[j-1]){
//                 dp[i][j]=1+dp[i-1][j-1];
//                   mx=max(dp[i][j],mx);
//             }
//             else{
              
//                 dp[i][j]=0;
//             }

//         }
//     }
//     return mx;
// }
// int main(){
// string a="AGGTAB";
// int n=a.size();
// string b= "AXGTABB";
// int m=b.size();
// cout<<solve(a,b,n,m)<<endl;
// return 0;
// }
