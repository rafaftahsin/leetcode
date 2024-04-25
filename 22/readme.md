### How to write a header file 

https://learn.microsoft.com/en-us/cpp/cpp/header-files-cpp?view=msvc-170

### Solution 1

```c++
//
// Created by rafaf.tahsin on 4/24/24.
//

#ifndef LEETCODE_22_H
#define LEETCODE_22_H

#endif //LEETCODE_22_H

using namespace std;

class Solution {
public:
    vector<string> genPar (string s, vector<char> first, vector<char> second) {
        if ( first.size() == 0) {
            for ( char c: second ) {
                s+= c;
            }
            return vector<string>{s};
        }

        if (first.size() == second.size()) {
            vector<char> f1 = first;
            f1.erase(f1.begin());

            vector<char> s1 = second;

            return genPar(s + '(', f1, s1);
        }
        else if (first.size() < second.size()) {
            vector<char> f1 = first;
            f1.erase(f1.begin());

            vector<char> s1 = second;

            vector<string> v1 = genPar(s + '(', f1, s1);

            vector<char> f2 = first;
            vector<char> s2 = second;
            s2.erase(s2.begin());

            vector <string> v2 = genPar(s + ')', f2, s2);

            v1.insert(v1.end(), v2.begin(), v2.end());

            return v1;
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<char> first (n, '(' );
        vector<char> second (n, ')' );


        return genPar("", first, second);
    }
};
```