#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        vector<int> index = nums;
        sort(index.begin(), index.end());
        
        for (int i = 0; i < index.size() - 1; ++i) {
            for (int j = i + 1; j < index.size(); ++j) {
                if (index[i] + index[j] > target) {
                    break;
                }
                
                if (index[i] + index[j] == target) {
                    for (int k = 0; k < nums.size(); ++k) {
                        if (nums[k] == index[i])
                            ans.push_back(k + 1);
                        else if (nums[k] == index[j])
                            ans.push_back(k + 1);
                        
                        if (ans.size() == 2)
                            break;
                    }
                    return ans;
                }
                
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> p = {2, 11, 15, 7};
    vector<int> ans;
    int target = 9;
    Solution T;
    ans = T.twoSum(p, target);
    cout << ans[0] << endl << ans[1] << endl;
    
    return 0;
}
