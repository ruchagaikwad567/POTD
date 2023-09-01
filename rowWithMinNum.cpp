#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int minRow(int N, int M, vector<vector<int>> matrix) {
        
        int mini=INT_MAX;
        int ans=-1;
        
        
        for(int i=0;i<N;i++)
        {
            int count1=0;
            for(int j=0;j<M;j++)
            {
                if(matrix[i][j]==1)
                {
                    count1++;
                    
                }
                
            }
            if(count1<mini)
            {
                mini=count1;
                ans=i+1;
            }
        }
        
        
        
        return ans;
        
        // code here
    }
};


int main()
{

    int m=4;
    int n=4;
    Solution obj;
    vector<vector<int>>matrix={{1,1,1,0},{1,1,0,0},{0,0,1,1},{1,1,1,1}};
    cout<<obj.minRow(n,m,matrix);

}