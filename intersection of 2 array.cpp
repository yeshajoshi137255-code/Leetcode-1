class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> count(1001,0);
        vector<int> ans;
        for(int x:nums1)
            count[x]++;
        for(int x:nums2) {
            if(count[x]>0) {
                ans.push_back(x);
                count[x]--;
            }
        }
        return ans;
    }
};
