class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
       int n = nums.size();
        vector<int> temp;
        for(int i = 0; i<n ; i++){
            temp.push_back(nums[i]);
        }
        for(int j = 0; j<n; j++){
            temp.push_back(nums[j]);
        }
        return temp;
    }
};