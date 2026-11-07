class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = (n*(n+1))/2;
        int c = 0;
        for(int i=0;i<n;i++){
            c+=nums[i];
        }
        return sum-c;
    }
};
