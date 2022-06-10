#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/
bool Sorter(const vector<int> &a,const vector<int> &b){
    
    return a[0]<b[0];
}
        
vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{


    sort(intervals.begin(),intervals.end(),Sorter);
    int start=intervals[0][0];
    int end=intervals[0][1];
    vector<vector<int>>op;
    for(int i=1 ; i<intervals.size() ; i++){
        if(intervals[i][0] > end){
            vector<int> tmp={start,end};
            op.push_back(tmp);
            start=intervals[i][0];
            end=intervals[i][1];
        }
        else{
            if(end < intervals[i][1])
                end=intervals[i][1];
        }
    }
    if(op.size()==0 || op[op.size()-1][1]!=end){
        vector<int>tmp={start,end};
        op.push_back(tmp);
    }
    return op;
}

