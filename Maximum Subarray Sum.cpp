#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long last=0;
    long long mx=INT_MIN;
    for(int i=0 ; i<n ; i++){
        if(arr[i]+last < 0){
            last=0;
        }
        else{
            last=last+arr[i];
        }
        if(last>mx) mx=last;
    }
    return mx;
}
