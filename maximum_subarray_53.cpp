#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
//53. Maximum Subarray
/* Problem Description*/
/*
Given an integer array nums, find the 
subarray with the largest sum, and return its sum.

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
Example 2:

Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.
Example 3:

Input: nums = [5,4,-1,7,8]
Output: 23
Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.

*/

/* solution */

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = INT_MIN;
        int cur_sum = 0;
        int max_element = INT_MIN;

        for(int i = 0; i < nums.size(); i++){
            cur_sum = max(cur_sum+nums[i],0);
            max_sum = max(max_sum,cur_sum);
            max_element = max(max_element,nums[i]);
        }

        if(max_sum == 0){
            max_sum = max_element;
        }

        return max_sum;
        

    }
};