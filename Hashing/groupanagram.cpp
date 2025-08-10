class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector <string> > mp;
        vector<vector<string>> ans;
        for (auto& word : strs) {
            string temp = word;               // copy original word
            sort(temp.begin(), temp.end());   // sort the copy
            mp[temp].push_back(word);         // group by sorted key
        }
        for(auto &[k,v] : mp){
            ans.push_back(v);
        }
        return ans;
    }
};