class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int>& a,int t,int i,vector<int>& v) {
        if(t==0) {
            ans.push_back(v);
            return;
        }
        for(int j=i;j<a.size();j++) {
            if(j>i && a[j]==a[j-1]) continue;
            if(a[j]>t) break;
            v.push_back(a[j]);
            solve(a,t-a[j],j+1,v);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& a,int target) {
        sort(a.begin(),a.end());
        vector<int> v;
        solve(a,target,0,v);
        return ans;
    }
};
