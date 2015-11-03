##Two Sum
>Given an array of integers, find two numbers such that they add up to a specific target number.  
The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.  
You may assume that each input would have exactly one solution.  
**Input**: numbers={2, 7, 11, 15}, target=9  
**Output**: index1=1, index2=2  

**注意**：一开始用两层for循环解题，超时了，数据可能是负数和0,也有可能重复数据［－1,0,1,0,2,2］
当和超过target时，break;

```
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> index;
        for (int i = 0; i < nums.size() - 1; ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                if (nums[i] + nums[j] == target) {
                    index.push_back(i + 1);
                    index.push_back(j + 1);
                    break;
                }
            }
        }
        return index;
    }
};

```