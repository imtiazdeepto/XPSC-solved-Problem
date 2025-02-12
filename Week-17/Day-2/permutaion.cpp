class Solution {
    void solve(vector<int>& v, vector<vector<int>>& ans, vector<int>& a, vector<bool>& frq, int n) {
        if (a.size() == n) {
            ans.push_back(a);
            return;
        }
        for (int i = 0; i < n; ++i) {
            if (!frq[i]) {
                a.push_back(v[i]);
                frq[i] = true;
                solve(v, ans, a, frq, n);
                frq[i] = false;
                a.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& v) {
        vector<int> a;
        vector<vector<int>> ans;
        int n = v.size();
        vector<bool> frq(n, false);
        solve(v, ans, a, frq, n);
        return ans;
    }
};
