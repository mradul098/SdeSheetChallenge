#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	map<int,int>mp;
    int f=floor(n/2);
    int mx,mxe=-1;
    for(int i=0 ; i<n ; i++){
        mp[arr[i]]++;
        if(f<mp[arr[i]]){
            mx=mp[arr[i]];
            mxe=arr[i];
        }
    }
    return mxe;
}
