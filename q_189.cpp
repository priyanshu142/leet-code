class Solution
{
public:
  void rotate(vector<int> &nums, int k)
  {
    int s = nums.size();
    if (s == 0 || s == 1)
    {
      return;
    }
    while (k > s)
    {
      k = k - s;
      if (k == s)
      {
        return;
      }
    }
    vector<int> vc;
    int j = 0;
    int h = 0;
    int p = 0;

    for (int i = 0; i < s; i++)
    {
      if (j < k)
      {
        vc.push_back(nums[s - (k - j)]);
        j++;
      }
      else
      {
        vc.push_back(nums[p]);
        p++;
      }
    }
    for (int i = 0; i < s; i++)
    {
      nums[i] = vc[i];
    }
  }
};