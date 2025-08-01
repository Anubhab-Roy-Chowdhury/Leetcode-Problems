class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cand = nums [0] , count =1 , n=nums.size(),ans;
        for(int i=0 ; i<n ; i++){
            if(nums[i]==cand){
                count ++;
            }
            else{
                count --;
            }
            if(!count){
                cand=nums[i];
                count = 1;

            }
        }
        count = 1;
        for(int val:nums){
            if(val == cand){
                count++;
            }
        }
        if(count>n/2){
            ans = cand;
        }
            
        return ans ;
            }