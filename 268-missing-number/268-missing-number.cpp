class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res=0;
        int n = nums.size();
        for(int i=1; i<=n; i++){
            res = res ^ i;
        }
        for(int i=0; i<n; i++){
            res = res ^ nums[i];
        }
        return res;
    }
};