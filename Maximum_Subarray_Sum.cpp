#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long ms=0;
    long long cs=0;
   
    
    for(int i=0;i<n;i++)
    {
        cs=cs+arr[i];
        if(cs>ms)
        {
            ms=cs;
        }
        if(cs<0)
        {
            cs=0;
        }
        
    }
    return ms;
}