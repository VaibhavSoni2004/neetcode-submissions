class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int shortest = 0;
        for(int i = 1; i < strs.size(); i++){
            if(strs[i].length()<strs[shortest].length()){
                shortest = i;
            }
        }

        string ans = "";

        for(int j = 0; j < strs[shortest].size(); j++){
            for(int i = 0; i < strs.size(); i++){
                if(strs[i][j] != strs[shortest][j]){
                    return ans;
                }
            }
            ans += strs[shortest][j];
        }
        return ans;
    }
};