class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto x:nums) {mp[x]++;}
        int c= 0;
        for(auto x:nums) {if (k-x == x) {continue;}int z = min(mp[x],mp[k-x]); mp[x]-=z; mp[k-x]-=z; c+=z;}
        if (k%2 == 0) {c+=(mp[k/2]/2);}
        return c;
    }
};
