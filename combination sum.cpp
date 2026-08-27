class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int>& a,int t,int i,vector<int>& v) {
        if(t==0) {
            ans.push_back(v);
            return;
        }
        if(i==a.size() || t<a[i]) return;
        v.push_back(a[i]);
        solve(a,t-a[i],i,v);
        v.pop_back();
        solve(a,t,i+1,v);
    }
    vector<vector<int>> combinationSum(vector<int>& a,int target) {
        sort(a.begin(),a.end());
        vector<int> v;
        solve(a,target,0,v);
        return ans;
    }
};
