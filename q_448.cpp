class Solution
{
public:
  vector<int> findDisappearedNumbers(vector<int> &nums)
  {
    int n = nums.size();
    vector<int> arr(n, 0);
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
      if (arr[nums[i] - 1] > 0)
      {
        a.push_back();
      }
      arr[nums[i] - 1]++;
    }
    return a;
  }
};