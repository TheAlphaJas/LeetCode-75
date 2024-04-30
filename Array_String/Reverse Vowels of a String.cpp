class Solution {
public:
    string reverseVowels(string s) {
        string ans = "";
        deque<char> c,v;
        for(auto x:s) {if ((x == 'a')||(x == 'e')||(x == 'i')||(x == 'o')||(x == 'u')||(x == 'A')||(x == 'E')||(x == 'I')||(x == 'O')||(x == 'U')) {v.push_back(x);} else {c.push_back(x);}}
        reverse(v.begin(),v.end());
        for(auto x:s) {if ((x == 'a')||(x == 'e')||(x == 'i')||(x == 'o')||(x == 'u')||(x == 'A')||(x == 'E')||(x == 'I')||(x == 'O')||(x == 'U')) {ans+=v[0]; v.pop_front();} else {ans+=c[0]; c.pop_front();}}
        return ans;
    }
};
