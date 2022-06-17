#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &a)
{
    // Write your code here.
    map<int,int> hm;
    vector<int> ans;
    for(auto i:a)
        hm[i]++;
    for(auto i: hm)
        if(i.second>floor(a.size()/3))
            ans.push_back(i.first);
    return ans;

}