#ifndef LEETCODE_242_H
#define LEETCODE_242_H
#endif //LEETCODE_242_H

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());

        return s == t;
    }
};