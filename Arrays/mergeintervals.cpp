class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> merged;
        sort(intervals.begin(),intervals.end());
        merged.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            vector<int> &last =merged.back();
            vector<int> &curr = intervals[i];
            if (last[1]>=curr[0]) { 
                last[1] = max(last[1], curr[1]);
            }
            else{
                merged.push_back(curr);
            }
        }
        return merged;
    }
};