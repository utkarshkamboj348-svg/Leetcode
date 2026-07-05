class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int x = target - num;
            if (mpp.find(x) != mpp.end()) {
                return {mpp[x],i};
            }
            mpp[num] = i;
        }
        return {};
    }
};