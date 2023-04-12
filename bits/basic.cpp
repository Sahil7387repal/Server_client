// //find the two elemnts in the array they have frquency 1
// #include <bits/stdc++.h>

// using namespace std;
// int main(){
// int a[10]={1,2,2,3,3,4,4,5,5,6};
// int ans=0;
// for(int i=0;i<10;i++){
// ans=(ans^a[i]);
// }
// int cnt=0;
// while(ans!=0){
// if(ans%2!=0){
//      break;
// }
//   cnt++;
// ans=ans>>1;
// }
// int xor1=0,xor2=0;
// for(int i=0;i<10;i++){
//     if(a[i]&(1<<cnt)){
//         xor1=(xor1^a[i]);
//     }
//     else{
//         xor2=(xor2^a[i]);
//     }
// }
// cout<<(xor1)<<endl;
// cout<<xor2<<endl;
// return 0;
// }

#include <bits/stdc++.h>

using namespace std;
int main(){
for(int j=0;j<2;j++){
    if(1&(1<<j)!=1){
        cout<<(1|(1<<j))<<endl;
  
    }
}
// cout<<(1&(1<<1))<<endl;
// cout<<(1|(1<<1))<<endl;
return 0;
}