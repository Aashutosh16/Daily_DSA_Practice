class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         // Initialize pointers
        int p1 = m - 1; // Pointer for nums1
        int p2 = n - 1; // Pointer for nums2
        int p = m + n - 1; // Pointer for the last element in nums1

        // Traverse the arrays from the end
        while (p1 >= 0 && p2 >= 0) {
            // Compare elements from nums1 and nums2
            if (nums1[p1] > nums2[p2]) {
                nums1[p] = nums1[p1]; // Place the larger element at the end of nums1
                p1--;
            } else {
                nums1[p] = nums2[p2]; // Place the larger element at the end of nums1
                p2--;
            }
            p--;
        }

        // If there are remaining elements in nums2, add them
        while (p2 >= 0) {
            nums1[p] = nums2[p2];
            p2--;
            p--;
        }
    }
};