#include <bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int> &v, int n)
{
   bool swapped;
   for (int i = 0; i < n-1; i++)
   {
     swapped = false;
     for (int j = 0; j < n-i-1; j++)
     {
        if (v[j] > v[j+1])
        {
           swap(v[j], v[j+1]);
           swapped = true;
        }
     }
     if (swapped == false)
        break;
   }
}
void insertion(vector<int> &v,int n){
   for(int i=1;i<n;i++){
      int j=i-1;
      int x=v[i];
      while(v[j]>x && j>-1){
         v[j+1]=v[j];
         j--;
      }
      v[j+1]=x;
   }
}
int main(){
//     int n;
//     cin>>n;
// vector<int> v(n);
// for(int i=0;i<n;i++){
//     cin>>v[i];
// }
// // bubbleSort(v,n);
// insertion(v,n);
// for(int i=0;i<n;i++){
//     cout<<v[i]<<" ";
//}
string s="1234";
cout<<s.substr(0,2)<<endl;
cout<<s.substr(3)<<endl;

return 0;
}