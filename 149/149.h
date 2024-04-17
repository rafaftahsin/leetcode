//
// Created by rafaf.tahsin on 4/17/24.
//

#ifndef LEETCODE_149_H
#define LEETCODE_149_H

#endif //LEETCODE_149_H

using namespace std;

namespace leetcode149 {
    class Solution {
    public:
        int maxPoints(vector<vector<int>>& points) {
            map < tuple<int, int, int>, set<int> > m;
            int max = 1;

            for ( int i=0; i< (points.size() -1); i++) {
                for( int j=i+1; j<points.size(); j++) {
                    int x1 = points[i][0];
                    int y1 = points[i][1];
                    int x2 = points[j][0];
                    int y2 = points[j][1];
                    int dx = x2 - x1;
                    int dy = y2 - y1;
                    int gcd = std::gcd(dx, dy);
                    dx /= gcd;
                    dy /= gcd;
                    int cdx = dx * y1 - dy * x1;
                    tuple <int, int, int> t = make_tuple( dx, dy, cdx);
                    m[t].insert(i);
                    m[t].insert(j);

                    if( max < m[t].size()) max = m[t].size();
                }
            }

            return max;
        }
    };
}
