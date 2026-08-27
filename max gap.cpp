class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        if(n<2) return 0;
        int mn=*min_element(nums.begin(),nums.end());
        int mx=*max_element(nums.begin(),nums.end());
        long long gap=max(1LL,(long long)(mx-mn)/(n-1));
        vector<int> lo(n,INT_MAX),hi(n,INT_MIN);
        for(int x:nums) {
            int i=(x-mn)/gap;
            if(i>=n) i=n-1;
            lo[i]=min(lo[i],x);
            hi[i]=max(hi[i],x);
        }
        int ans=0,prev=mn;
        for(int i=0;i<n;i++) {
            if(lo[i]==INT_MAX) continue;
            ans=max(ans,lo[i]-prev);
            prev=hi[i];
        }
        return ans;
    }
};
