class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int target = sum - x;

        int left = 0;
        int windowSum = 0;
        int maxLength = -1;

        for (int right = 0; right < nums.size(); right++) {

            windowSum += nums[right];

            while (windowSum > target && left <= right) {
                windowSum -= nums[left];
                left++;
            }

            if (windowSum == target) {
                maxLength = max(maxLength, right - left + 1);
            }
        }

        if (maxLength == -1)
            return -1;

        return nums.size() - maxLength;
    }
};