// C++ code to implement the
// matrix chain multiplication using recursion

// #include <bits/stdc++.h>

// using namespace std;
// int dp[100][100];
// int solve(int a[],int i,int j){
//     if(i>=j){
//         return 0;
//     }
//     if(dp[i][j]!=-1){
//         return dp[i][j];
//     }
//     dp[i][j] = INT_MAX;
//         for(int k=i;k<j;k++){
//     int temp=solve(a,i,k)+solve(a,k+1,j)+(a[i-1]*a[k]*a[j]);
// dp[i][j]=min(dp[i][j],temp);
//     }
//     return dp[i][j];
// }
// int main(){
// int a[]={1,2,3,4,3};
// memset(dp,-1,sizeof(dp));
// int n=5;
// cout<<n<<endl;
// cout<<solve(a,1,n-1);
// return 0;
// }


//palindrome partiotioning
#include <bits/stdc++.h>

using namespace std;
bool pal(string s,int i,int j){
    while(i<j){
        if(s[i]!=s[j]) return false;
        i++;j--;
    }
    return true;
}
   int dp[100][100];
int solve(string s,int i,int j){
 
    if(i>=j){
        return 0;
    }
    if(pal(s,i,j)){
return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    dp[i][j]=INT_MAX;
    for(int k=i;k<=j-1;k++){
if(pal(s,i,k)){
    int temp=1+solve(s,k+1,j);
    dp[i][j]=min(dp[i][j],temp);
}

    }
    return dp[i][j];
}
int main(){
    memset(dp,-1,sizeof(dp));
  
string s="abba";
cout<<solve(s,0,3);
return 0;
}