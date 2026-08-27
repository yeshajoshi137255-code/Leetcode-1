class NumArray {
public:
    vector<int> sum;
    NumArray(vector<int>& nums) {
        sum.push_back(0);
        for(int x:nums)
            sum.push_back(sum.back()+x);
    }
    int sumRange(int left, int right) {
        return sum[right+1]-sum[left];
    }
};
