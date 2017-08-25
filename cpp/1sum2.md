class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        ret.clear();
        
        int n = nums.size();
        for(int i = 0 ; i < n; i++)
        {

                for(int j=i+1; j<n; j++)
                {
                    if(nums[j] + nums[i] == target ) 
                    {
                        ret.push_back(i);
                        ret.push_back(j);
                        return ret;
                    }
                        
                }
       }

    }
};