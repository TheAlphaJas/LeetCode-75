class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        set<int> S;
        map<int,int> mp; 
        for(auto x:arr) {mp[x]++;}
        for(auto x:mp) {S.insert(x.second);}
        if (S.size() == mp.size()) {return 1;} else {return 0;}
    }
};
