class Solution
{
public:
  int removeDuplicates(vector<int> &nums)
  {
    int x = 0;
    int j, r = 1;
    int y = nums.size();
    for (int i = 1; i < y; i++)
    {
      if (nums[i] == nums[i - 1])
      {
        x = x + 1;
        continue;
      }
      else
      {
        int j = i - x;
        nums[j] = nums[i];
        r++;
      }
    }
    return r;
  }
};