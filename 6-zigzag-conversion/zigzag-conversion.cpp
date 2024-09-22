#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s; // No zigzag needed if only one row
        
        // Create a vector of strings, one for each row
        vector<string> rows(min(numRows, int(s.size())));
        int currRow = 0;
        bool goingDown = false;

        // Traverse the string and place characters in the appropriate rows
        for (char c : s) {
            rows[currRow] += c; // Add character to the current row
            // Change direction if we reach the top or bottom row
            if (currRow == 0 || currRow == numRows - 1) goingDown = !goingDown;
            // Move up or down based on the direction
            currRow += goingDown ? 1 : -1;
        }

        // Combine all rows into a single string
        string result;
        for (string row : rows) {
            result += row;
        }
        return result;
    }
};
