class Solution {
public:
    bool isAnagram(string s, string t) {
       int n = s.size();
       int m = t.size();

       if(n != m){
        return false;
       } 
       int freqS[26] = {0};
       int freqT[26] = {0};

       for(int i = 0; i<n ; i++){
           freqS[s[i] - 'a'] ++;
           freqT[t[i] - 'a'] ++;
       }

       for(int i = 0; i<26; i++){
        if(freqS[i] != freqT[i]){
            return false;
        }
       }
       return true;
    }
};
