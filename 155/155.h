//
// Created by rafaf.tahsin on 4/23/24.
//

#ifndef LEETCODE_155_H
#define LEETCODE_155_H

#endif //LEETCODE_155_H

#include "bits/stdc++.h"

using namespace std;

namespace leetcode155 {
    class MinStack {
        private:
            stack<int>st;
            multiset<int>ms;
        public:
            MinStack() {}

            void push(int val) {
                st.push(val);
                ms.insert(val);
            }

            void pop() {
                int top = st.top();
                st.pop();

                multiset<int>::iterator it = ms.find(top);
                ms.erase(it);
            }

            int top() {
                return st.top();
            }

            int getMin() {
                return *(ms.begin());
            }
    };
}
