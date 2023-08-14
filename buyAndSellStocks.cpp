/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

 

Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

*/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int maxProfit(vector<int>&v)
    {
        if(v.size()==1)
        {
            return 0;
        }

        int maxPro=0;
        int mini=v[0];
        
        for(int i=0;i<v.size();i++)
        {
            int pro=v[i]-mini;
            maxPro=max(maxPro,pro);
            if(v[i]<mini)
            {
                mini=v[i];
            }
        }
        return maxPro;
    }

};

int main()
{
    vector<int>v={7,1,5,3,6,4};
    Solution obj;
    cout<<obj.maxProfit(v);

}