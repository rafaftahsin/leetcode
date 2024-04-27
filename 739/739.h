//
// Created by rafaf.tahsin on 4/27/24.
//

#include <queue>

#ifndef LEETCODE_739_H
#define LEETCODE_739_H

#endif //LEETCODE_739_H
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        auto cmp = [&temperatures](int &a, int &b) -> bool { return temperatures[a] > temperatures[b]; };
        priority_queue< int, vector<int>, decltype(cmp) > pq(cmp);

        vector<int> result(temperatures.size(), 0);
        for( int i=0; i<temperatures.size(); i++) {
            while ( !pq.empty() && temperatures[pq.top()] < temperatures[i]) {
                result[pq.top()] = i - pq.top();
                pq.pop();
            }
            pq.push(i);
        }

        return result;
    }
};