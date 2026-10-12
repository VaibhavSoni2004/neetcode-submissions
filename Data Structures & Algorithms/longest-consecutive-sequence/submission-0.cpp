class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        int longestlength = 0;
        for(int x : st){
            if(st.count(x-1) == 0){
                int current = x;
                int currentlength = 1;

            while(st.count(current+1)){
            current ++;
            currentlength ++;
        }
        longestlength = max(longestlength,currentlength);
     }
 }
        return longestlength;
    }
};
