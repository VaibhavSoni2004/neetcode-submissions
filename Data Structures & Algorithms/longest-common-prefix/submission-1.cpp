class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int n = strs[0].size();

        for(int j = 0; j < n; j++){
            for(int i = 1; i < strs.size();i++){
                if(strs[i].size()-1 <j || strs[i][j] != strs[0][j]){
                    return ans;
                }
            }
            ans += strs[0][j];
        }
 
        return ans;
    }
};