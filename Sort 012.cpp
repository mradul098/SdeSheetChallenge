#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int cnt[3];
    memset(cnt,0,sizeof(cnt));
    for(int i=0 ; i<n ; i++){
        cnt[arr[i]]++;
    }
    int k=0;
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<cnt[i] ; j++){
            arr[k++]=i;
        }
    }
}
