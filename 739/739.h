//
// Created by rafaf.tahsin on 4/27/24.
//

#include <queue>
#include "stack"

#ifndef LEETCODE_739_H
#define LEETCODE_739_H

#endif //LEETCODE_739_H
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack <int > s;

        for( int i=0; i<temperatures.size(); i++) {
            while( !s.empty() && temperatures[ s.top() ] < temperatures[i]) {
                temperatures[s.top()] = i - s.top();
                s.pop();
            }
            s.push(i);
        }

        while (!s.empty()) {
            temperatures[s.top()] = 0;
            s.pop();
        }

        return temperatures;
    }
};
