class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;
        set<vector<int>> s;
        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                for(int k = j + 1; k < n; k++)
                {
                    for(int l = k + 1; l < n; l++)
                    {
                        long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];
                        if(sum == target)
                        {
                            vector<int> trip = {nums[i], nums[j], nums[k], nums[l]};
                            sort(trip.begin(), trip.end());

                            if(s.find(trip) == s.end())
                            {
                                s.insert(trip);
                                ans.push_back(trip);
                            }
                        }
                    }
                }
            }
        }
        return ans;
    }
};
