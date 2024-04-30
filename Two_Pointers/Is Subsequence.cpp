class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.size() == 0 && t.size() == 0) {return 1;}
        int j = 0;
        int fl = 0;
        for(int i = 0;i<t.size();i++) {
            if (j == s.size()) {fl = 1; break;}
            if (t[i] == s[j]) {j++;}
            if (j == s.size()) {fl = 1; break;}
        }
        if (fl) {return 1;} else{return 0;}
    }
};
