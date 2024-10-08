class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> c(cost.size()+1,0);
        for(int i = 2;i<cost.size()+1;i++) {
            c[i] = min(c[i-2] + cost[i-2],c[i-1] + cost[i-1]);
        }
        return c[cost.size()];
    }
};
