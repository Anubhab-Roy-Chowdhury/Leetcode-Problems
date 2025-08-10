class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> map1;
              unordered_map<int,int> map2;
        for(int val:nums1){
            map1[val]++;
        }
        for(int val:nums2){
            map2[val]++;
        }
        vector<int> result;
          for (int val : nums2) {
           while(map1[val] && map2[val]) {
            result.push_back(val);
            map1[val]--;
            map2[val]--;
           }
        }

        return result;

    }
};