class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int pivot = -1;
        int lsum=0;
        int sum = accumulate(nums.begin(), nums.end(), 0);
        for(int i=0;i<nums.size();i++){
           
            
            if(lsum==sum-lsum-nums[i]){
               pivot= i;
               break;
            }
            else{
             lsum+=nums[i];
        }

        }
        return pivot;
    }
};