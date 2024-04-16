//
// Created by rafaf.tahsin on 4/16/24.
//

#include <queue>

#ifndef LEETCODE_347_H
#define LEETCODE_347_H

#endif //LEETCODE_347_H

using namespace std;

namespace leetcode347 {
    class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
            map<int, int> frequency;

            for( int num: nums) {
                frequency[num]++;
            }

            auto cmp = [&frequency](int a, int b) {
                return frequency[a] < frequency[b];
            };

            priority_queue< int, vector<int>, decltype(cmp) > pq(cmp);

            for( auto f : frequency) {
                pq.push(f.first);
            }

            vector<int> result;

            for (int i = 0; i < k; i++) {
                result.push_back(pq.top());
                pq.pop();
            }
            return result;
        }
    };
}
