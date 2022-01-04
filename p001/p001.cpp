#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public:
  vector<int> twoSum(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
      for (int j = i + 1; j < nums.size(); j++) {
          if (nums[i] + nums[j] == target) {
              vector<int> res = { i, j };
              return res;
          }
      }
    }
  }
};

int main(void) {

    {
        vector<int> nums = {2, 7, 11, 15};
        int target = 9;
        auto res = Solution().twoSum(nums, target);
        cout << res[0] << " " << res[1] << endl;
    }
    

	{
        vector<int> nums = {3, 2, 4};
        int target = 6;
        auto res = Solution().twoSum(nums, target);
        cout << res[0] << " " << res[1] << endl;
	}

	{
        vector<int> nums = {3, 3};
        int target = 6;
        auto res = Solution().twoSum(nums, target);
        cout << res[0] << " " << res[1] << endl;
	}

  return 0;
}
