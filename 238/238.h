//
// Created by rafaf.tahsin on 4/17/24.
//

#ifndef LEETCODE_238_H
#define LEETCODE_238_H

#endif //LEETCODE_238_H

using namespace std;

namespace leetcode238 {
    class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& nums) {
            int p = 1;
            for( int num: nums)
                p *= num;

            if ( p ==0 ) {
                vector<int> result (nums.size(), p);

                for (int i = 0; i < nums.size(); i++) {

                    if(nums[i] == 0) {
                        int prefix = 1;
                        for( int j=0; j<i; j++)
                            prefix = prefix * nums[j];

                        int suffix = 1;
                        for (int j = i+1; j < nums.size(); j++)
                            suffix = suffix * nums[j];

                        result[i] = prefix * suffix;
                    } else {
                        result[i] = 0;
                    }
                }
                return result;
            }
            else {
                vector<int> result (nums.size(), p);

                for (int i = 0; i < nums.size(); i++) {
                    result[i] /= nums[i];
                }
                return result;
            }
        }
    };
}