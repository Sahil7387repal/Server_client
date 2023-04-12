//find pivot element 
#include <bits/stdc++.h>

using namespace std;
int pivot(int a[],int n){
    int l=0,r=n-1;
    while(l<r){
        int mid=(l+r)/2;
        if(a[mid]>a[0]){
            l=mid+1;
        }
        else{
            r=mid;
        }

    }
    return l;
}
int main(){
int a[]={8,10,17,1,3};
cout<<a[pivot(a,5)]<<endl;
return 0;
}