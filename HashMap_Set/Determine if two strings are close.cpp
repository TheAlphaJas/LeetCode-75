class Solution {
public:
    bool closeStrings(string word1, string word2) {
        map<char,int> mp1,mp2;
        set<char> S1, S2;
        for(auto x:word1) {mp1[x]++; S1.insert(x);}
        for(auto x:word2) {mp2[x]++; S2.insert(x);}
        vector<int> a,b;
        for(auto x:mp1) {a.push_back(x.second);}
        for(auto x:mp2) {b.push_back(x.second);}
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if (a.size()!=b.size()) {return 0;}
        for(int i = 0;i<a.size();i++) {if(a[i]!=b[i]) {return 0;}}
        if (S1.size()!=S2.size()) {return 0;}
        for(auto x:S1) {if(S2.count(x) == 0) {return 0;}}
        for(auto x:S2) {if(S1.count(x) == 0) {return 0;}}
        return 1;
        }
};
