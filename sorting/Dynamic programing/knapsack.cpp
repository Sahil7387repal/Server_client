
// #include <bits/stdc++.h>
// using namespace std;
// int solve(int weight[], int prices[], int w, int n)
// {
//     if(n==0||w==0){
//         return 0;
//     }
//     else if(weight[n-1]<=w){
// return max(prices[n-1]+solve(weight,prices,w-weight[n-1],n-1),solve(weight,prices,w,n-1));
//     }
//     else{
//         return solve(weight,prices,w,n-1);
//     }
// }
//by using dp;
// int t[100][1000];
// int solve(int weight[], int prices[], int w, int n)
// {
//     if (w== 0 || n == 0)
//         return 0;



//     if (t[n][w] != -1)
//         return t[n][w];
// if(weight[n-1]<=w){
// return t[n][w]=max(prices[n-1]+solve(weight,prices,w-weight[n-1],n-1),solve(weight,prices,w,n-1));
// }
// else{
//     return t[n][w]=solve(weight,prices,w,n-1);
// }
// }
// int main()
// {
//     memset(t,-1,sizeof(t));
//     int n = 3;
//     int W = 8;
//     int weight[] = {3,4,5};
//     int prices[] = {30,50,60};

//     int ans = solve(weight, prices, W, n);
//     cout << ans << endl;

//     return 0;
// }



//topdown approach
// #include <bits/stdc++.h>

// using namespace std;
// int solve(int weight[],int prices[],int w,int n){
//     int t[n+1][w+1];
//    for(int i=0; i<n+1; i++)
//         for(int j=0; j<w+1; j++)
//         if(i==0||j==0)
//         t[i][j]=0;
//     for(int i=1;i<n+1;i++){
//         for(int j=1;j<w+1;j++){
//             if(weight[i-1]<=j){
// t[i][j]=max(prices[i-1]+t[i-1][j-weight[i-1]],t[i-1][j]);
//             }
//             else if(weight[i-1]>j){
//                 t[i][j]=t[i-1][j];
//             }
//         }
//     }
//     return t[n][w];
// }

// int main(){
//     int n = 3;
//     int w= 8;
//     int weight[] = {3,4,5};
//     int prices[] = {30,50,60};
// cout<<solve(weight,prices,w,n)<<endl;
// return 0;
// }

