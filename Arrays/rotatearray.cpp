class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         int n = nums.size();
        vector<int> temp(n,0);
       
        for(int i =0;i<n;i++){
            temp[(i+k)%n]=nums[i];
    }
    nums.assign(temp.begin(),temp.end());
        
    }
};