class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> count(nums.size()+1,0);      
        for(int x:nums)
            count[x]++;
        int a=0,b=0;
        for(int i=1;i<=nums.size();i++) {
            if(count[i]==2) a=i;
            if(count[i]==0) b=i;
        }
        return {a,b};
    }
};
