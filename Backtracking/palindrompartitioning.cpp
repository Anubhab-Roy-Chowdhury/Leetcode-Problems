class Solution {
public:
bool palindrom(string &s){
    bool flag = true;
    int l=0;
    int r=s.length()-1;
    while(l<r){
        if(s[l++]!=s[r--]){
            flag = false;
        }
    }
    return flag;
}
void backtrack(string &s,int start,int end,vector<string> & curr, vector<vector<string>> & res){
   // string checker;
    if(start>=s.length()){
        res.push_back(curr);
        return;
    }
    for(int i =start;i<s.length();++i){
        string checker = s.substr(start, i - start + 1);
        if(palindrom(checker)){
            curr.push_back(checker);
            backtrack(s,i+1,s.length(),curr,res);
            curr.pop_back();
        }
       // checker.pop_back();

    }
    //return res;
}
    vector<vector<string>> partition(string s) {
     
     vector<vector<string>> res;
     vector<string> curr;
     backtrack(s,0,s.length(),curr,res);
        return res;
    }
};