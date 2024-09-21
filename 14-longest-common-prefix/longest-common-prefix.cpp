class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // If the vector is empty, return an empty string
        if (strs.empty()) return "";

        // Initialize the longest common prefix as the first string
        string lcp = strs[0];

        // Loop through the rest of the strings
        for (int i = 1; i < strs.size(); i++) {
            int j = 0;
            // Compare lcp with the current string character by character
            while (j < lcp.size() && j < strs[i].size() && lcp[j] == strs[i][j]) {
                j++;
            }
            // Shorten lcp to the matched portion
            lcp = lcp.substr(0, j);
            // If there's no common prefix, return an empty string
            if (lcp.empty()) return "";
        }

        return lcp;
    }
};
