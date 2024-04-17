//
// Created by rafaf.tahsin on 4/17/24.
//

#ifndef LEETCODE_128_H
#define LEETCODE_128_H

#endif //LEETCODE_128_H

using namespace std;

namespace leetcode128 {
    class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            if (nums.size() == 0) return 0;
            if (nums.size() == 1) return 1;

            set<int>s(nums.begin(), nums.end());

            set<int>::iterator it = s.begin();
            it++;

            int max = 1, count = 1;
            for( ; it!=s.end(); it++ ) {
                if (*it == *prev(it) + 1) {
                    count++;
                } else {
                    count = 1;
                }
                max = std::max(max, count);
            }


            return max;
        }
    };
}