// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = -1, end = -1;
        vector<int> ans;
        int i = 0;
        int j = nums.size()-1;
        while(i <= j)
        {
            int mid = (i+j)/2;
            if(nums.at(mid) == target)
            {
               int temp = mid;
                
                while(mid > 0 && nums.at(mid-1) == target) 
                    mid--;
                
                start = mid;
                
                while(temp<nums.size()-1 && nums.at(temp+1) == target) 
                    temp++;
                
                end = temp;
                
                ans.push_back(start);
                ans.push_back(end);
                return ans;
            }
            
            else if(nums.at(mid) > target)
                j = mid-1;
            else
                i = mid+1;
        }
        
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
};

