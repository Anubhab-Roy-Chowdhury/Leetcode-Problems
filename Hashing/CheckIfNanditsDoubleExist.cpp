class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        bool flag = false;
        unordered_set<int> st;
        for(int val:arr){
          st.insert(val);
        }
        // for(auto& [k,v] : mp){
        //     if(k!=0 && mp.find(2*k)!=mp.end()){
        //         flag = true;
        //         break;
        //     }
        // }
         bool falgforzero = false;
         int count = 0;
         for(int val: arr){
            if(val == 0){
                count++;
            }
         }
         if(count>=2){
            flag = true;
           
         }
            


         for(auto& val:st){
            if(val!=0 && st.count(val*2)){
                flag = true;
                break;
            }
         }


        return flag;
    }
};