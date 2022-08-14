class Solution
{
public:
  bool isUgly(int n)
  {
    vector<int> primes = {2, 3, 5};
    if (n < 1)
    {
      return false;
    }
    for (int it : primes)
    {
      while (n % it == 0)
      {
        n = n / it;
      }
    }
    if (n == 1)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
};