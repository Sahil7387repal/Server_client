// #include <bits/stdc++.h>

// using namespace std;
// int solve(int longer[],int price[],int len,int n){
//     int dp[n+1][len+1];
//     for(int i=0;i<n+1;i++){
//         for(int j=0;j<len+1;j++){
//             if(i==0||j==0){
//                 dp[i][j]=0;
//             }
//         }
//     }
//     for(int i=1;i<n+1;i++){
//         for(int j=1;j<len+1;j++){
//             if(longer[i-1]<=j)
//             dp[i][j]=max(price[i-1]+dp[i][j-longer[i-1]],dp[i-1][j]);
//             else
//             dp[i][j]=dp[i-1][j];
//         }
//     }
//     return dp[n][len];
// }
// int main(){
// int longer[]={1,2,3,4,5,6,7,8};
// int price[]={1,5,8,9,10,17,17,20};
// int len=8;
// cout<<solve(longer,price,len,8);
// return 0;
// }


//coin change -1;
// #include <bits/stdc++.h>

// using namespace std;
// int solve(int a[],int sum,int n){
//     int dp[n+1][sum+1];
//     for(int i=0;i<n+1;i++){
//         for(int j=0;j<sum+1;j++){
//             if(i==0){
//                 dp[i][j]=0;
//             }
//             if(j==0){
//                 dp[i][j]=1;
//             }
//         }
//     }
//     for(int i=1;i<n+1;i++){
//         for(int j=1;j<sum+1;j++){
//             if(a[i-1]<=j){
//                 dp[i][j]=dp[i][j-a[i-1]]+dp[i-1][j];
//             }
//             else{
//                 dp[i][j]=dp[i-1][j];
//             }
//         }
//     }
//     return dp[n][sum];
// }
// int main(){
// int a[]={1,2,3};
// int sum=5;
// int n=3;
// cout<<solve(a,sum,n)<<endl;
// return 0;
// }


//coin change second
//no of coins
#include <bits/stdc++.h>

using namespace std;
int solve(int a[],int sum,int n){
    int dp[n+1][sum+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i==0){
                dp[i][j]=INT_MAX-1;
            }
            if(j==0){
                dp[i][j]=0;
            }
            if(j%a[0]==0){
                dp[i][j]=j/a[0];
            }
            else{
                dp[i][j]=INT_MAX-1;
            }
        }
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(a[i-1]<=j){
               dp[i][j]= min(1+dp[i][j-a[i-1]],dp[i-1][j]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    if(dp[n][sum]==INT_MAX-1){
        return -1;
    }
    return dp[n][sum];
}
int main(){
int a[]={9,6,5,1};
int sum=12;
int n=3;
cout<<solve(a,sum,n)<<endl;
return 0;
}
