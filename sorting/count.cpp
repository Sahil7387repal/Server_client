#include <bits/stdc++.h>
using namespace std;
int getMax(int array[], int size) {
   int max = array[0];
   for(int i = 1; i<size; i++) {
      if(array[i] > max)
         max = array[i];
   }
   return max; 
}
void count(int v[],int n){

int mx=getMax(v,n);
int a[mx+1];
for(int i=0;i<mx+1;i++){
    a[i]=0;
}
for(int i=0;i<n;i++){
    a[v[i]]++;
}
int i=0,j=0;
while(i<mx+1){
    if(a[i]>0){
        v[j++]=i;
        a[i]--;
    }
    else{
        i++;
    }
}
}
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
count(a,n);
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<endl;
return 0;
}