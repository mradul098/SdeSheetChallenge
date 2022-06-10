#include <bits/stdc++.h> 

void setZeros(vector<vector<int>> &matrix)
{
    bool row=false;
    bool col=false;
	for(int i=0  ; i<matrix.size() ; i++){
        if(matrix[i][0]==0) row=true;
    }
    for(int i=0 ; i<matrix[0].size() ; i++){
        if(matrix[0][i]==0) col=true;
    }
    for(int i=1 ; i<matrix.size() ; i++){
        for(int j=1 ; j<matrix[0].size() ; j++){
            if(matrix[i][j]==0){
                matrix[i][0]=0;
                matrix[0][j]=0;
            }
        }
    }
    
    for(int i=1 ; i<matrix.size() ; i++){
        for(int j=1 ; j<matrix[0].size() ; j++){
            if(matrix[i][0]==0 || matrix[0][j]==0) matrix[i][j]=0;
        }
    }
    for(int i=0  ; i<matrix.size() ; i++){
        if(row==true){
            matrix[i][0]=0;
        }
    }
    for(int i=0 ; i<matrix[0].size() ; i++){
        if(col==true){
            matrix[0][i]=0;
        }
    }
}
