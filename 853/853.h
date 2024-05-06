//
// Created by rafaf.tahsin on 4/29/24.
//

#ifndef LEETCODE_853_H
#define LEETCODE_853_H

#endif //LEETCODE_853_H

#include <stack>
#include "queue"

using namespace std;

class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        auto cmp = [](pair<int,int> a, pair<int, int> b) { return a.first > b.first; };

        multiset< pair<int,int>, decltype(cmp) > s(cmp);

        for( int i = 0; i< position.size(); i++) {
            s.insert(make_pair(position[i], speed[i]));
        }

        stack < pair < int, int > > stk;
        multiset< pair<int,int>, decltype(cmp) >::iterator it = s.begin();

        stk.push( * s.begin());
        it = s.erase(s.begin());

        while( it != s.end()) {
            pair <int, int> p1 = stk.top();
            stk.pop();
            int dis1 = target - p1.first;
            double t1 = (double) dis1 / (double) p1.second;

            pair <int, int> p2 = * s.begin();
            it = s.erase( s.begin());
            int dis2 = target - p2.first;
            double t2 = (double) dis2 / (double) p2.second;

            if (t2 <= t1) {
                double x = ( dis2 * p1.second - dis1 * p2.second ) / ( p1.second - p2.second );
                stk.push(make_pair(x, p2.second));
            }
            else {
                stk.push(p1);
                stk.push(p2);
            }
        }

        return stk.size();
    }
};