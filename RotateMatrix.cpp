#include <bits/stdc++.h> 

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    int bottom=mat.size()-1;
    int top=0;
    int left=0;
    int right=mat[0].size()-1;
    int prev;
        
    while(top<bottom && right>left){
        prev=mat[top+1][left];
        for(int i=left ; i<=right ; i++){
            int tmp=mat[top][i];
            mat[top][i]=prev;
            prev=tmp;
        }
        top++;
        for(int i=top ; i<=bottom ; i++){
            int tmp=mat[i][right];
            mat[i][right]=prev;
            prev=tmp;
        }
        right--;
        for(int i=right ; i>=left ; i--){
            int tmp=mat[bottom][i];
            mat[bottom][i]=prev;
            prev=tmp;
        }
        bottom--;
        for(int i=bottom ; i>=top ; i--){
            int tmp=mat[i][left];
            mat[i][left]=prev;
            prev=tmp;
        }
        left++;
    }
}
