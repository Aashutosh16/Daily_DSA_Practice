class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0; // Pointer to place the next non-val element.
        
        // Iterate through the vector.
        for (int j = 0; j < nums.size(); ++j) {
            if (nums[j] != val) {
                nums[i] = nums[j]; // Place the non-val element at index i.
                i++; // Move the i pointer to the next position.
            }
        }
        
        return i; // Return the new length of the array.
    }
};
