class Solution
{
public:
  int firstBadVersion(int n)
  {
    int low = 0;
    int high = n;
    int mid;
    while (low < high)
    {
      mid = low + (high - low) / 2;
      if (isBadVersion(mid))
      {
        high = mid;
      }
      else
      {
        low = mid + 1;
      }
    }
    return low;
  }
};