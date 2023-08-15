class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int a = 0;
        int b = nums.size() - 1;
        
        int k;
        while(a <= b){
         k = (b + a)/2;
            if(nums[k] == target){
                return k;
            }
         if(nums[k] > target){
             b = k -1;
         }
         else{
            a = k + 1;
         }
        }
        return a;


        
         }
};
