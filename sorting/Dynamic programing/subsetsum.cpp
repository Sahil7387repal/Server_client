#include <bits/stdc++.h>

using namespace std;
int solve(int a[],int n,int sum){
    int dp[n+1][sum+1];
    for(int i=0;i<sum+1;i++){
        dp[0][i]=0;
    }
    for(int i=0;i<n+1;i++){
        dp[i][0]=1;
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(a[i-1]<=j){
                dp[i][j]=dp[i-1][j-a[i-1]]+dp[i-1][j];
            }
            else if(a[i-1]>j){
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][sum];
}
int main(){
int n=4;
int a[]={2,3,8,4};
int sum=9;
cout<<solve(a,n,sum)<<endl;
return 0;
}


//equal sum partition problem

// #include <bits/stdc++.h>

// using namespace std;
// int subset(int a[],int n,int sum){
//     int dp[n+1][sum+1];
//     for(int i=0;i<sum+1;i++){
//         dp[0][i]=0;
//     }
//     for(int i=0;i<n+1;i++){
//         dp[i][0]=1;
//     }
//     for(int i=1;i<n+1;i++){
//         for(int j=1;j<sum+1;j++){
//             if(a[i-1]<=j){
//                 dp[i][j]=dp[i-1][j-sum-a[i-1]]||dp[i-1][j];
//             }
//             else if(a[i-1]>j){
//                 dp[i][j]=dp[i-1][j];
//             }
//         }
//     }
//     return dp[n][sum];
// }
// bool solve(int a[],int n,int sum ){
// if(sum%2!=0){
//     return false;
// }
// else{
// return subset(a,n,sum/2);
// }
// }
// int main(){
//     int n=3;
//     int a[]={1,5,6};
// int sum=0;
//     for(int i=0;i<n;i++){
// sum+=a[i];
//     }
// cout<<solve(a,n,sum)<<endl;
// return 0;
// }



//count of subsets of given sum
// #include <bits/stdc++.h>

// using namespace std;
// int solve(int a[],int sum ,int n){
//     int dp[n+1][sum+1];
//     for(int i=0;i<sum+1;i++){
// dp[0][i]=0;
//     }
//     for(int i=0;i<n+1;i++){
//         dp[i][0]=1;
//     }
//     for(int i=1;i<n+1;i++){
//         for(int j=1;j<sum+1;j++){
//             if(a[i-1]<=j){
//                 dp[i][j]=(dp[i-1][j-a[i-1]]+dp[i-1][j]);
//             }
//             else{
//                 dp[i][j]=dp[i-1][j];
//             }
//                     }
//     }
//     return dp[n][sum];
// }
// int main(){
//     int n=6;
// int a[]={2,3,5,10,8,10};
// int sum=10;
// cout<<solve(a,sum,n)<<endl;
// return 0;
// }


//minimum subset sum diff
// #include <bits/stdc++.h>

// using namespace std;
// int mindiff(int a[],int n){
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=a[i];
//     }
//     int dp[n+1][sum+1];
//     for(int i=0;i<n+1;i++){
//         for(int j=0;j<sum+1;j++){
//             if(i==0){
//                 dp[i][j]=0;
//             }
//             else if(j==0){
//                 dp[i][j]=1;
//             }
//         }
//     }
//     for(int i=1;i<n+1;i++){
//         for(int j=1;j<sum+1;j++){
//             if(a[i-1]<=j){
//                 dp[i][j]=dp[i-1][j-a[i-1]]||dp[i-1][j];
//             }
//             else if(a[i-1]>j){
//                 dp[i][j]=dp[i-1][j];
//             }
//         }
//     }
//     int ans=INT_MAX;
//     for(int i=0;i<sum+1;i++){
//         if(dp[n][i]==1){
//             cout<<i<<endl;
// ans=min(ans,abs(sum-2*i));
//         }
//     }
//     return ans;
// }
// int main(){
// int a[]={1,2,7};
// int n=3;
// cout<<mindiff(a,n)<<endl;
// return 0;
// }

//count subsets with given diff
// #include <bits/stdc++.h>

// using namespace std;
// int solve(int a[],int sum ,int n){
//     int dp[n+1][sum+1];
//     for(int i=0;i<n+1;i++)
//     for(int j=0;j<sum+1;j++)
//     {
//         if(i==0)
//         dp[i][j]=0;
//         if(j==0)
//         dp[i][j]=1;
//     }

//     for(int i=1;i<n+1;i++){
//         for(int j=1;j<sum+1;j++){
//             if(a[i-1]<=j){
//                 dp[i][j]=(dp[i-1][j-a[i-1]]+dp[i-1][j]);
//             }
//             else{
//                 dp[i][j]=dp[i-1][j];
//             }
//                     }
//     }
//     return dp[n][sum];
// }
// int main(){
//     int n=4;
// int a[]={1,1,2,3};
// int sum=7;
// int diff=1;
// cout<<solve(a,(1+sum)/2,n)<<endl;
// return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;
// int solve()
// int main(){
//     int n=4;
// int a[]={1,1,1,1};
// int sum=3;

// return 0;
// }
