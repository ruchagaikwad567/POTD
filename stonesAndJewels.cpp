#include<bits/stdc++.h>
#include<iostream>
#include<unordered_set>
using namespace std;

/*
You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels.

Letters are case sensitive, so "a" is considered a different type of stone from "A".*/

class Solution
{
    public:
    int numJewelsInStones(string jewels,string stones)
    {
        unordered_set<char>j;
        for(char it:jewels)
        {
            j.insert(it);
        }

        int count=0;

        for(char c:stones)
        {
            if(jewels.find(stones) != j.end())


            {
                count++;
            }
        }
        return count;
    }

};

int main()
{
    string j="aA";
    string s="aAAbbbb";
    Solution obj;
    cout<<obj.numJewelsInStones(j,s);
}
