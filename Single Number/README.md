##Single Number
>Given an array of integers, every element appears twice except for one. Find that single one.  
**Note: ** 
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

* 解析：一个数字，只有一个数字出现一次，其他的都出现两次，找出这个数字。
* 提示：使用异或操作

```
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (auto i : nums)
            ans ^= i;
        return ans;
    }
};
```