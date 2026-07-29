#include <bits/stdc++.h>
using namespace std;
 
/* Minimum window substring : Given a string "s" and a string "t". Find the minimum length substring of 's' that contains all the characters of 't' 

s = "abbcbcba" t = "abc"  ans:3
s = "abracadabra t = "caad" ans:4
s = "a" t = "aa" ans:0

*/

class Solution {
public:
    string minWindow(string s, string t) {
        // Edge cases: empty strings or s is shorter than t
        if (s.empty() || t.empty() || s.length() < t.length()) {
            return "";
        }

        // Frequency map for characters in string t
        // Size 128 is sufficient for standard ASCII characters
        vector<int> char_map(128, 0);
        for (char c : t) {
            char_map[c]++;
        }

        int left = 0;
        int right = 0;
        int min_len = INT_MAX;
        int start_idx = 0;
        
        // Number of characters we still need to match
        int required = t.length();

        while (right < s.length()) {
            // If the current character is needed, decrement the required count
            if (char_map[s[right]] > 0) {
                required--;
            }
            // s = "abracadabra t = "caad"
            // Always decrement the character count in our map
            // Characters not in 't' will become negative [a:-1,b-1,r-1]
            char_map[s[right]]--;
            right++;

            // When we have found all required characters, try to shrink the window
            while (required == 0) {
                // Update the minimum window size and starting index
                if (right - left < min_len) {
                    min_len = right - left;
                    start_idx = left;
                }

                // Restore the character at the left pointer as we shrink the window
                char_map[s[left]]++;
                
                // If the character we just removed was strictly required, 
                // the window is no longer valid
                if (char_map[s[left]] > 0) {
                    required++;
                }
                left++;
            }
        } 

        return min_len == INT_MAX ? "" : s.substr(start_idx, min_len);
    }
};