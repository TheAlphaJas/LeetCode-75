class Solution {
public:
    string removeStars(string s) {
        string g;
        for(int i = 0;i<s.size();i++) {
            if (s[i] == '*') {g.resize(g.size()-1);}
            else  {g+=s[i];}
        }
        return g;
    }
};
