//solution to LeetCode 217. Contains duplicate.  Given an array (actually provided vector in problem)
//determine if there are any duplicate values in the array/vector

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = i+1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                {
                    return true;
                }
            }
        }
        return false;
    }
};