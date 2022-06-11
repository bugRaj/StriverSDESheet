#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    for(int i=0;i<n;i++)
    {
        int id=abs(arr[i])-1;
        if(arr[id]<0)
        {
            return id+1;
        }
        else
        {
            arr[id]=-arr[id];
        }
    }
    return -1;
}
