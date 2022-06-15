#include <bits/stdc++.h> 
long long int helper(long long int x,int p, int m)
    {
        if(p==0)return 1;
        if(p%2==0)return (helper((x*x)%m,p/2 , m))%m;
        else return (x*(helper((x*x)%m,p/2 , m))%m)%m;
    }
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
    int ans= (helper(x%m,n,m))%m;
    return ans;
}