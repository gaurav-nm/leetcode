class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentsum = 0 , maxSum = INT_MIN;

        for(int val : nums){
            currentsum += val ;
            maxSum = max(currentsum , maxSum);

            if(currentsum < 0){
                currentsum = 0;
            }
        }
        return maxSum;
    }
};