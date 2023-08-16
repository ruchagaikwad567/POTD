#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int add(int num)
    {
        while(num>=10)
        {
            int sum=0;
            while(num>0)
            {
                sum+=num%10;
                num=num/10;
            }
            num=sum;
        }
        return num;
    }
};

int main()
{
    Solution obj;
    cout<<obj.add(38);
}