class Solution
{
public:
  void moveZeroes(vector<int> &nums)
  {
    int left = 0, right = 0;

    while (left < nums.size() && right < nums.size())
    {
      if (nums[right] == 0)
        right++;

      else
      {
        swap(nums[right], nums[left]);
        left++;
        right++;
      }
    }
    return;
  }
};