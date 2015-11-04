## Add Digits

>Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.  
**For example:**
Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.  
**Follow up:**
Could you do it without any loop/recursion in O(1) runtime?

* **数字根问题**
* 将数字38各位求和：3 + 8 = 11，1 + 1 = 2.
     结果为个位数时，返回。

```
	class Solution {
	public:
	    int addDigits(int num) {
	        if (num)
	            return (num % 9 > 0) ? (num % 9) : 9;
	        else
	            return 0;
	    }
	};
```
