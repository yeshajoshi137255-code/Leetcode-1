class Solution {
public:
    int maxArea(vector<int>& height)
    {
        int maxwater = 0;
        int i = 0;
        int j = height.size() - 1;

        while(i < j)
        {
            int w = j - i;
            int h = min(height[i], height[j]);
            int totalwater = h * w;

            maxwater = max(maxwater, totalwater);

            if(height[i] < height[j])
                i++;
            else
                j--;
        }

        return maxwater;
    }
};
