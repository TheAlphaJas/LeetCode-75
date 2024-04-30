class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int mx = 0;
        mx = max(mx,gain[0]);
        for(int i = 1;i<gain.size();i++) {gain[i] = gain[i-1] + gain[i]; mx=max(mx,gain[i]);}
        return mx;
    }
};
