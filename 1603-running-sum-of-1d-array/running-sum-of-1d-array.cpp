class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>a;
        for(int i=0;i<nums.size();i++)
        {
            int sum = 0;
            for(int j=0;j<=i;j++)
            {
                sum = sum + nums[j];
            }
            a.push_back(sum);
        }
        return a;
    }
};