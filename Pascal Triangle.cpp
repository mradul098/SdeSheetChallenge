#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
    vector<long long int> tmp;
    vector<vector<long long int>> op(n,tmp);
//     tmp.push_back(1);
    op[0].push_back(1);
    
    for(int i=1 ; i<n ; i++){
        for(int j=0  ; j<=i ; j++){
            if(j==0){
                op[i].push_back(1);
            }
            else{
                long long int num=op[i-1][j-1];
                if(j!=i){
                    num+=op[i-1][j];
                }
                op[i].push_back(num);
            }
        }
        
    }
    
    return op;
}
