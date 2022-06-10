#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &nums, int n)
{
   if(nums.size()==1) return nums;
        int j=nums.size()-1;
        bool flag=false;
        
        while(j > 0){
            if(nums[j] > nums[j-1]){
                int tmp=nums[j-1];
                int mx=INT_MAX;
                int idx=-1;
                
                for(int i=j ; i<nums.size() ; i++){
                    if(nums[i]-tmp < mx && nums[i]-tmp>0){
                        mx=nums[i]-tmp;
                        idx=i;
                    }
                }
                // cout<<"idhar";
                // cout<<nums[j-1]<<" "<<nums[idx]<<endl;
                swap(nums[j-1],nums[idx]);
                sort(nums.begin()+j,nums.end());
                flag=true;
                break;
            }
            j--;
        }
        if(!flag){
            sort(nums.begin(),nums.end());
        }
    return nums;
}
