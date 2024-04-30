class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> e1,e2;
        for(auto x:nums1) {e1[x]++;} for(auto x:nums2) {e2[x]++;}
        vector<int> c1,c2;
        for(auto x:e1) {if (e2[x.first]==0) {c1.push_back(x.first);}}
        for(auto x:e2) {if (e1[x.first]==0) {c2.push_back(x.first);}}
        vector<vector<int>> ans;
        ans.push_back(c1); ans.push_back(c2);
        return ans; 
    }
};
