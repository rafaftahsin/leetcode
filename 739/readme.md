### TLE Solution

```c++
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> v;

        for( vector<int>::iterator it=temperatures.begin(); it!=temperatures.end(); it++) {
            vector<int>::iterator found_at = find_if(it, temperatures.end(), [it]( int elem) -> bool { return *it < elem; });

            if(found_at == temperatures.end())
                v.push_back(0);
            else
                v.push_back(distance(it, found_at));
        }

        return v;
    }
};
```