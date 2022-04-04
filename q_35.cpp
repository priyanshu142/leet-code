class Solution
{
public:
  int searchInsert(vector<int> &nums, int target)
  {
    int x = nums.size() - 1;
    int start = 0;
    int mid = 0;
    int t = 0;
    int q = 0;
    while (start <= x)
    {
      cout << mid;
      mid = start + (x - start) / 2;
      if (nums[mid] == target)
      {
        return mid;
      }
      else if (nums[mid] < target)
      {
        start = mid + 1;
        q = 1;
      }
      else if (nums[mid] > target)
      {
        x = mid - 1;
        q = 2;
      }
    }
    if (q == 1)
    {
      return mid + 1;
    }
    else
    {
      return mid;
    }
  }
};