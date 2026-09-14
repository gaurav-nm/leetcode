class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //check push to github
        int ans = 0 ;
        for(int val :nums){
            ans = ans ^ val;
        }

        return ans ;
    }
};