#include <bits/stdc++.h> 
int modularExponentiation(long long int x,long long int y, int p) {
    int res = 1; 
    x = x % p;  
    if (x == 0) return 0;  
    while (y>0)
    {
        if (y%2==1)  //if odd
            res = (res*x) % p; //turned into even
        y/=2; //if even divide it and raise the base powerred 2 
        x = (x*x) % p;
    }
    return res;
    
}
