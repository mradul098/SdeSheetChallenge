#include <bits/stdc++.h> 
using namespace std;
int cnt=0;
void mergesort(vector<long long>&vec,int i,int j,int &ans){
    if(j<=i) return;
//     cout<<i<<j<<endl;
    int md=(i+j)/2;
    int i1=i,j1=md+1;
    vector<long long>op;
    mergesort(vec,i,md,ans);
    mergesort(vec,md+1,j,ans);
    while(i1<=md && j1<=j){
        if(vec[i1] < vec[j1]){
//             cout<<"LOP "<<vec[i1]<<" "<<vec[j1]<<endl;
            op.push_back(vec[i1++]);
        }
        else{
            cnt+=(md-i1+1);
            op.push_back(vec[j1++]);
        }
    }
    while(i1<=md) op.push_back(vec[i1++]);
    while(j1<=j){
//         cnt+=(j-j1);
        op.push_back(vec[j1++]);
    }
//     cout<<i<<" "<<j<<endl;
//     cout<<"op"<<endl;
//     for(int ut:op) cout<<ut<<" ";
//     cout<<endl;
    for(int i2=i ; i2<=j ; i2++){
//         cout<<op[i2-i]<<"  ";
        vec[i2]=op[i2-i];
    }
//     cout<<endl;
}
long long getInversions(long long *arr, int n){
    vector<long long>vec;
    cnt=0;
    for(int i=0 ; i<n ; i++) vec.push_back(arr[i]);
    int ans=0;
    mergesort(vec,0,vec.size()-1,ans);
//     for(long long it:vec) cout<<it<<" ";
    return cnt;
}
