#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> result;
        int n = words.size();
        int i = 0;
        
        while (i < n) {
            int j = i + 1;
            int lineLength = words[i].length();
            // Find the maximum words that can fit in the line
            while (j < n && (lineLength + words[j].length() + (j - i)) <= maxWidth) {
                lineLength += words[j].length();
                j++;
            }
            
            int numWords = j - i;
            int totalSpaces = maxWidth - lineLength;
            
            // Construct the line
            string line;
            if (numWords == 1 || j == n) {
                // Left-justified for single word or last line
                line = words[i];
                for (int k = i + 1; k < j; ++k) {
                    line += " " + words[k];
                }
                line += string(maxWidth - line.size(), ' ');
            } else {
                // Fully justified
                int spaceBetween = totalSpaces / (numWords - 1);
                int extraSpaces = totalSpaces % (numWords - 1);
                
                line = words[i];
                for (int k = i + 1; k < j; ++k) {
                    int spaces = spaceBetween + (extraSpaces-- > 0 ? 1 : 0);
                    line += string(spaces, ' ') + words[k];
                }
            }
            
            result.push_back(line);
            i = j;
        }
        
        return result;
    }
};