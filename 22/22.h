//
// Created by rafaf.tahsin on 4/24/24.
//

#ifndef LEETCODE_22_H
#define LEETCODE_22_H

#endif //LEETCODE_22_H

using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {

        vector< tuple<string, string, string> > v {
                make_tuple("", string (n, '('), string(n, ')'))
        };

        for( int i = 1; i<= 2*n; i++) {

            int sz = v.size();

            for ( int j = 0; j< sz; j++) {

                if( get<1>(v[j]).size() == 0) {
                    get<0>(v[j]).push_back(')');
                    get<2>(v[j]).pop_back();
                    continue;
                }


                if( get<1>(v[j]).size() == get<2>(v[j]).size()) {
                    get<0>(v[j]).push_back('(');
                    get<1>(v[j]).pop_back();
                }
                else if (get<1>(v[j]).size() < get<2>(v[j]).size()) {

                    tuple<string, string, string> tp = v[j];
                    get<0>(tp).push_back('(');
                    get<1>(tp).pop_back();
                    v.push_back(tp);

                    get<0>(v[j]).push_back(')');
                    get<2>(v[j]).pop_back();

                }
            }
        }

        vector<string> result {};

        for( tuple<string, string, string> t : v) {
            result.push_back(get<0>(t));
        }

        return result;

    }
};