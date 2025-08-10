class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
          unordered_map<int,int> mp;
        mp[0]=1;
        int currsum=0,count=0;
        for(int i=0;i<nums.size();i++){
            currsum+=nums[i];
            if(mp.find(currsum-goal)!=mp.end()){
                    count+=mp[currsum-goal];
                    // if(goal==0){
                    //     mp[0]++;
                    // }
                  //  mp[k-currsum]++;

            }
            mp[currsum]++;
        }
        return count;
        
    }
};
