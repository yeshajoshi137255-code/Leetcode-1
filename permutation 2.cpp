class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int>& a,vector<int>& v,vector<int>& used) {
        if(v.size()==a.size()) {
            ans.push_back(v);
            return;
        }
        for(int i=0;i<a.size();i++) {
            if(used[i] || (i>0 && a[i]==a[i-1] && !used[i-1]))
                continue;
            used[i]=1;
            v.push_back(a[i]);
            solve(a,v,used);
            v.pop_back();
            used[i]=0;
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> v,used(nums.size());
        solve(nums,v,used);
        return ans;
    }
};
