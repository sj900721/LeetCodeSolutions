#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using std::string;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::set<int> lengths;
        auto first_it = s.cbegin();
        auto last_it = s.cbegin();
        auto find_it = s.cbegin();

        while(last_it != s.cend())
        {
            last_it++;
            find_it = std::find(first_it, last_it, *last_it);
            if (find_it != last_it)
            {
                lengths.insert(last_it - first_it);
                first_it = find_it + 1;
            }
        }

        lengths.insert(last_it - first_it);

        return *lengths.rbegin();
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}