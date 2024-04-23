//
// Created by rafaf.tahsin on 4/23/24.
//

#include <stack>

#ifndef LEETCODE_150_H
#define LEETCODE_150_H

#endif //LEETCODE_150_H

using namespace std;

namespace leetcode150 {
    class Solution {
    public:
        int evalRPN(vector<string>& tokens) {
            stack<int >st;

            for(string s: tokens) {
                if( s == "+" || s == "-" || s == "*" || s == "/") {
                    int num1 = st.top();
                    st.pop();
                    int num2 = st.top();
                    st.pop();

                    if ( s == "+")
                        st.push(num2 + num1);
                    else if ( s == "-")
                        st.push(num2 - num1);
                    else if ( s == "*")
                        st.push(num2 * num1);
                    else if ( s == "/")
                        st.push(num2 / num1);
                }
                else
                    st.push(stoi(s));

            }
            return st.top();
        }
    };
}