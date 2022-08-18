class Solution
{
public:
  vector<int> singleNumber(vector<int> &nums)
  {
    int x = 0;
    for (int n : nums)
    { // xor all the number will give only xor of unique elements
      x ^= n;
    }
    int setbit = 1;
    for (int i = 1; i <= 31; i++)
    {
      if (x & setbit)
        break; // This is the rightmost set bit
      setbit <<= 1;
    }

    vector<int> result = {0, 0};
    for (int n : nums)
    {
      if (setbit & n)
      {
        result[0] ^= n;
      }
      else
      {
        result[1] ^= n;
      }
    }
    return result;
  }
};