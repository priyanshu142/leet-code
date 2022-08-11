class Solution
{
public:
  int addDigits(int num)
  {
    int count = 0;
    int res;
    while (num >= 0)
    {
      int temp = num % 10;
      count += temp;
      num /= 10;
      if (num == 0)
      {
        if (count >= 10)
        {
          num = count;
          count = 0;
        }
        else
        {
          res = count;
          break;
        }
      }
    }
    return res;
  }
};