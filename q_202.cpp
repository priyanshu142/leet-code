class Solution
{
public:
  int squareSum(int k)
  {
    int p = 0;
    while (k > 0)
    {
      p += (k % 10) * (k % 10);
      k = k / 10;
    }
    return p;
  }
  bool isHappy(int n)
  {
    int slow, fast;
    slow = fast = n;
    do
    {
      slow = squareSum(slow);
      fast = squareSum(fast);
      fast = squareSum(fast);
      if (slow == 1)
      {
        return true;
      }
    } while (slow != fast);
    return false;
  }
};