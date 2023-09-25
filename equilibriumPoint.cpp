#include<bits/stdc++.h>
using namespace std;



class Solution
{
    public:
    int equilibrium(long long a[],int n)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
        }
        int leftsum=0;

        for(int i=0;i<n;i++)
        {
            sum-=a[i];
            if(leftsum==sum)
            {
                return i+1;
            }
            leftsum+=a[i];
        }

        return -1;
    }

};

int main()
{
    Solution obj;
    long long a[5]={1,3,5,2,2};
    cout<<obj.equilibrium(a,5);

}