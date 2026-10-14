class Solution {
public:
    void rotate(vector<int>& nums, int k) {
      int n = nums.size();
      int d = k%n;

      vector<int>temp;
      for(int i = n-d; i < n; i++){
        temp.push_back(nums[i]);
      }  
      for(int i = n-1; i >= d; i--){
        nums[i] = nums[i-d];
      }
      int j = 0;
      for(int i = 0; i < d; i++){
        nums[i] = temp[j];
        j++;
      }
    }
};