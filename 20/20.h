//
// Created by rafaf.tahsin on 4/22/24.
//

#include <stack>
#include <queue>

#ifndef LEETCODE_20_H
#define LEETCODE_20_H

#endif //LEETCODE_20_H

using namespace std;

namespace leetcode20 {
    class Solution {

    public:
        bool isValid(string s) {

            stack<char>st;
            map<char, char>m {
                    {')', '('},
                    {'}', '{'},
                    {']', '['}
            };

            for( char c: s) {
                if ( c == '(' || c == '{' || c == '[')
                    st.push(c);
                else {

                    if( st.empty() || st.top() != m[c])
                        return false;
                    else
                        st.pop();
                }
            }
            return st.empty();
        }
    };
}