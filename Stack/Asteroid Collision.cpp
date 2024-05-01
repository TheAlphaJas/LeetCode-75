class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        vector<int> ans;
        for(auto x:a) {
            if (x >=0 ) {ans.push_back(x);}
            else if (x<0) {
                if (ans.size() > 0) {
                    if (ans[ans.size() - 1] < 0) {ans.push_back(x);}
                    else {
                        int f = 0;
                        while(ans.size() > 0 && ans[ans.size() - 1] > 0) {
                            if (ans[ans.size()-1] > abs(x)) {f=1; break;}
                            else if (ans[ans.size()-1] + x == 0) {f=1; ans.pop_back(); break;}
                            else {ans.pop_back();}
                        }
                        if (f==0) {ans.push_back(x);}
                    }
                } else {
                    ans.push_back(x);
                }
            }
        }
        return ans;
    }
};
