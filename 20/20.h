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


    private:
        queue<char> remove_parenthesis( queue<char> &q, char parenthesis_begin, char parenthesis_end) {
            queue<char> r;

            while( !q.empty()) {
                char sym = q.front();
                q.pop();

                if ( sym == parenthesis_begin) {
                    if(q.front() == parenthesis_end)
                        q.pop();
                } else {
                    r.push(sym);
                }
            }

            return r;
        }
    public:
        bool isValid(string s) {

            queue<char > q;

            for( char i : s) {
                q.push(i);
            }

            q = remove_parenthesis(q, '(', ')');
            q = remove_parenthesis(q, '{', '}');
            q = remove_parenthesis(q, '[', ']');

            return q.empty();
        }
    };
}