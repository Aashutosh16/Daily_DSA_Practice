class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sIndex = 0; // Pointer for string s
        int tIndex = 0; // Pointer for string t

        // Loop through both strings
        while (sIndex < s.size() && tIndex < t.size()) {
            // If characters match, move the pointer in s
            if (s[sIndex] == t[tIndex]) {
                sIndex++;
            }
            // Always move the pointer in t
            tIndex++;
        }

        // If we've gone through all characters in s, it's a subsequence
        return sIndex == s.size();
    }
};
