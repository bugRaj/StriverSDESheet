#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int mn=INT_MAX;
    int mx=0;
    for(int i=0;i<prices.size();i++)
    {
        if(prices[i]<mn)
            mn=prices[i];
        else if(prices[i]-mn>mx)
            mx=prices[i]-mn;
    }
    return mx;
}