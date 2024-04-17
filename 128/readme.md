### nlogn solution

```c++
//
// Created by rafaf.tahsin on 4/17/24.
//

#ifndef LEETCODE_128_H
#define LEETCODE_128_H

#endif //LEETCODE_128_H

using namespace std;

namespace leetcode128 {
    class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {

            if (nums.size() == 0) return 0;
            if (nums.size() == 1) return 1;


            sort(nums.begin(), nums.end());
            vector<int>::iterator it = unique(nums.begin(), nums.end());
            nums.erase(it, nums.end());

            int max = 1;

            for( int i = 0; i < ( nums.size()-1); i++) {
                int count = 1;
                while ( nums[i+1] == (nums[i] + 1) && i < (nums.size() - 1)) {
                    count++;
                    i++;
                }
                max = std::max(max, count);
            }


            return max;
        }
    };
}
```

### `prev` and `next` iterator functions are really helpful

https://en.cppreference.com/w/cpp/iterator

https://en.cppreference.com/w/cpp/iterator/prev

### function `unique` to remove consecutive repeated element

https://en.cppreference.com/w/cpp/algorithm/unique
https://www.geeksforgeeks.org/stdunique-in-cpp/

### function `erase` to remove vector element

### `std::set` is already sorted. `sort` function doesn't work on it.

### Remove duplicate elements from an array? 

Making it a set is the easier and efficient way. 

- https://stackoverflow.com/questions/1041620/whats-the-most-efficient-way-to-erase-duplicates-and-sort-a-vector

- https://www.geeksforgeeks.org/remove-duplicates-from-vector-in-cpp/
