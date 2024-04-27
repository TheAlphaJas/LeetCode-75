class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int s = 0;
        s = min(word1.size(),word2.size());
        for(int i =0;i<s;i++) {
            ans += word1[i];
            ans += word2[i];
        }
        if (word1.size() > s) {
            for(int i = s;i<word1.size();i++) {
                ans += word1[i];
            }
        } else {
            for(int i = s;i<word2.size();i++) {
                ans += word2[i];
            }
        }
        return ans;
    }
};
