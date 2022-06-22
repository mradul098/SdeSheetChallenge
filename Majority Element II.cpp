#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
   int cnt=floor(arr.size()/3);
    vector<int>vec;
    map<int,int>mp;
    for(int it:arr){
        mp[it]++;
        if(mp[it]-1==cnt) vec.push_back(it);
    }
    return vec;
}
