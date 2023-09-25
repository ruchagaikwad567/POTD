#include<bits/stdc++.h>
using namespace std;


class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        int n=matrix.size();
        int m=matrix[0].size();

        int ifix=-1;
        int jfix=-1;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==1)
                {
                    ifix=i;
                    jfix=j;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                matrix[ifix][j]=1;
                matrix[i][jfix]=1;
            }
        }
        // code here 
    }
};

int main()
{
    int r=2;
    int c=2;
    vector<vector<int>>v={{0,0,0,0},{1,0,1,0},{0,1,1,0},{0,0,0,0}};
    Solution obj;
    obj.booleanMatrix(v);

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}