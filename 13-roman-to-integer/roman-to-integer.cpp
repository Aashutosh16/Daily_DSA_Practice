class Solution {
public:
    int romanToInt(string s) {
        // Map of Roman numeral characters and their corresponding integer values
        unordered_map<char, int> romanMap = {
            {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int total = 0;
        int n = s.length();

        // Traverse the string from left to right
        for (int i = 0; i < n; i++) {
            // If the current value is less than the next value, subtract the current value
            if (i < n - 1 && romanMap[s[i]] < romanMap[s[i + 1]]) {
                total -= romanMap[s[i]];
            } 
            // Otherwise, add the current value
            else {
                total += romanMap[s[i]];
            }
        }

        return total;
    }
};
