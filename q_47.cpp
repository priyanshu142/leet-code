
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
  void findRpermute(vector<int> nums, int left, int right)
  {
    if (left == right)
    {
      a.push_back(nums);
      return;
    }
    for (int i = left; i <= right; i++)
    {

      swap(nums, left, i);
      findRpermute(nums, left + 1, right);
      swap(nums, left, i);
    }
  }
  vector<vector<int>> permuteUnique(vector<int> &nums)
  {
    int x = nums.size();

    findRpermute(nums, 0, x - 1);
    set<vector<int>> st;
    int n = a.size();

    for (int i = 0; i < n; i++)
    {
      st.insert(a[i]);
    }

    a.clear();

    for (auto i : st)
    {
      a.push_back(i);
    }
    return a;
  }
};