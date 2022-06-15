#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	pair<int,int>op;
    int sm=0;
    for(int i=0 ; i<n  ;i++){
        sm+=abs(arr[i]);
        if(arr[abs(arr[i])-1]<0) op.second=abs(arr[i]);
        arr[abs(arr[i])-1]=-1*abs(arr[abs(arr[i])-1]);
    }
    op.first=(((n*(n+1))/2)-sm+op.second);
    return op;
}
