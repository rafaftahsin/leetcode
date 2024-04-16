//
// Created by rafaf.tahsin on 4/16/24.
//

#ifndef LEETCODE_49_H
#define LEETCODE_49_H

#endif //LEETCODE_49_H

#include "string"
#include "vector"

using namespace std;

namespace leetcode49 {
    class Solution {
    public:
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
            map<string , vector<string> > m;
            vector<vector<string>> result;

            for( string s: strs) {
                string c = s;
                std::sort(c.begin(), c.end());
                m[c].push_back(s);
            }

            for( map<string , vector<string> >::iterator it = m.begin(); it != m.end(); it++ ) {
                result.push_back(it->second);
            }

            return result;

        }
    };
}

