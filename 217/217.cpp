//
// https://leetcode.com/problems/contains-duplicate/description/
//

#include <stdio.h>
#include "map"
#include "vector"

using namespace std;

vector<int> nums = {1,1,1,3,3,4,3,2,4,2};

class Solution {
public:
    static bool containsDuplicate(vector<int>& nums) {
        int mp[100001] = {};

        for( int i = 0; i< nums.size(); i++) {
            if(mp[nums[i]] == 0) {
                mp[nums[i]] = 1;
            }
            else {
                return true;
            }
        }
        return false;
    }
};