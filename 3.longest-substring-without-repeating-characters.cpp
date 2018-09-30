/*
 * [3] Longest Substring Without Repeating Characters
 *
 * https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
 *
 * algorithms
 * Medium (25.04%)
 * Total Accepted:    589.3K
 * Total Submissions: 2.4M
 * Testcase Example:  '"abcabcbb"'
 *
 * Given a string, find the length of the longest substring without repeating
 * characters.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: "abcabcbb"
 * Output: 3 
 * Explanation: The answer is "abc", with the length of 3. 
 * 
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: "bbbbb"
 * Output: 1
 * Explanation: The answer is "b", with the length of 1.
 * 
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: "pwwkew"
 * Output: 3
 * Explanation: The answer is "wke", with the length of 3. 
 * ⁠            Note that the answer must be a substring, "pwke" is a
 * subsequence and not a substring.
 * 
 * 
 * 
 * 
 * 
 */

#include <string>
#include <set>
#include <algorithm>
using std::string;

// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         if (s.empty()) return 0;

//         std::set<int> lengths;
//         auto first_it = s.cbegin();
//         auto last_it = s.cbegin() + 1;
//         auto find_it = s.cbegin();

//         while(last_it != s.cend())
//         {
//             find_it = std::find(first_it, last_it, *last_it);
//             if (find_it != last_it)
//             {
//                 lengths.insert(last_it - first_it);
//                 first_it = find_it + 1;
//             }
//             last_it++;
//         }

//         lengths.insert(last_it - first_it);

//         return *lengths.rbegin();
//     }
// };
