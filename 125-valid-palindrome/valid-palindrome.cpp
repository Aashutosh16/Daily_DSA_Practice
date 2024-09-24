class Solution {
public:
    bool isPalindrome(string s) {
        // Two pointers, starting from the beginning and the end
        int left = 0, right = s.size() - 1;
        
        while (left < right) {
            // Skip non-alphanumeric characters
            while (left < right && !isalnum(s[left])) {
                left++;
            }
            while (left < right && !isalnum(s[right])) {
                right--;
            }
            
            // Compare characters, ignoring case
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }
            
            left++;
            right--;
        }
        
        return true;
    }
};
