class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if (n < 2 ) return 0;
        int jumps = 0;
        int currentJumpEnd = 0;
        int farthest = 0;
        for (int i =0 ; i < n-1; i++){
            farthest = max(farthest , i + nums[i]);
            if (i == currentJumpEnd){
                jumps++;
                currentJumpEnd = farthest;
                if(currentJumpEnd >= n-1) break;
            }
        }
        return jumps;
    }
};