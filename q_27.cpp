class Solution
{
public:
  int removeElement(vector<int> &nums, int val)
  {
    int x = nums.size();
    int y = 0;
    int j = 0;

    for (int i = 0; i < x; i++)
    {
      if (nums[i] == val)
      {
        y++;
      }
      else
      {
        nums[i - y] = nums[i];
        j++;
      }
    }
    return j;
  }
};