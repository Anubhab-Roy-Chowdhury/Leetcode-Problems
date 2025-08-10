class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0]=1;
        int currsum=0,count=0;
        for(int i=0;i<nums.size();i++){
            currsum+=nums[i];
            if(mp.find(currsum-k)!=mp.end()){
                    count+=mp[currsum-k];
                  //  mp[k-currsum]++;

            }
            mp[currsum]++;
        }
        return count;
    }
};