class Solution {
public:
    void moveZeroes(vector<int> &nums) {
        vector<int> tmp;
        int cnt = 0;
        for(auto x:nums) {if(x == 0) {cnt++;} else {tmp.push_back(x);}}
        nums.clear();
        for(auto x:tmp) {nums.push_back(x);}
        for(int i = 0;i<cnt;i++) {nums.push_back(0);}
    }
};
