int i=0,j=0,sum=0,mx=INT_MIN;
while(j<n){
    sum+=a[j];
    if(sum<k){
        j++;
    }
    else if(sum==k){
mx=max(mx,j-i+1);
j++;
    }
    else if(sum>k){
        while(sum>k){
            sum=sum-a[i];
            i++;
        }
        j++;
    }
}