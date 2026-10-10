class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0 ;
        int right = height.size() - 1 ;
        int maxwater = 0 ;

    while(left < right){
        int w = right - left ;
        int ht = min(height[left], height[right]);

        int curwater = w * ht ;

        maxwater = max(curwater , maxwater);

        if(height[left] < height[right]){
            left++;
        }else{right--;}
    }
    return maxwater;








    //     for(int i = 0 ; i < n ; i++ ){
    //         for(int j = i+1 ; j < n ; j++){
    //             int w = j- i ;
    //             int ht = min(height[i], height[j]);

    //             int curwater = w * ht ;

    //             maxwater = max(curwater , maxwater);
    //         }
    //     }
    //     return maxwater ;
    }
};