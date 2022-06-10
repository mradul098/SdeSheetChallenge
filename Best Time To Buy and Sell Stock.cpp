#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int maxtill=prices[prices.size()-1];
    int mx=0;
    
    for(int i=prices.size()-2 ; i>=0 ; i--){
        if(maxtill > prices[i]){
            mx=max(mx,maxtill-prices[i]);
        }
        else{
            maxtill=prices[i];
        }
    }
    return mx;
}
