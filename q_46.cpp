class Solution
{
public:
  vector<vector<int>> a;
  void swap(vector<int> &nums, int left, int i)
  {
    int t = nums[left];
    nums[left] = nums[i];
    nums[i] = t;
  }
  void findPermute(vector<int> nums, int left, int right)
  {
    if (left == right)
    {
      a.push_back(nums);
    }
    for (int i = left; i <= right; i++)
    {
      swap(nums, left, i);
      findPermute(nums, left + 1, right);
      swap(nums, left, i);
    }
  }

  vector<vector<int>> permute(vector<int> &nums)
  {
    int x = nums.size();
    findPermute(nums, 0, x - 1);
    return a;
  }
};