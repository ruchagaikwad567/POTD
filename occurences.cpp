#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    unordered_map<int,int>m;
	    for(int i=0;i<n;i++)
	    {
	        m[arr[i]]++;
	        
	    }
	    int ans=0;
	    for(auto it:m)
	    {
	        if(it.first==x)
	        {
	            ans=it.second;
	        }
	    }
	    return ans;
	    // code here
	}
};

int main()
{
    Solution obj;
    int arr[]={1,1,2,2,2,2,3,3};
    int n=8;
    int x=2;
    cout<<obj.count(arr,n,x);
}