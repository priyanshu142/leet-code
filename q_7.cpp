class Solution
{
public:
  int reverse(int x)
  {
    double y = 0;
    int i = 0;
    int flag = 0;
    if (x <= -pow(2, 31) || x >= pow(2, 31))
    {
      return 0;
    }

    if (x < 0)
    {
      flag = 1;
      x = x * -1;
    }

    while (true)
    {
      if (x <= 0)
      {
        break;
      }
      else
      {
        if (y < -pow(2, 31) || y >= pow(2, 31))
        {
          return 0;
        }
        int k = x % 10;
        y = (y * 10) + k;
        x = x / 10;
        i++;
      }
    }

    if (flag == 1)
    {
      y = y * -1;
    }
    if (y < -pow(2, 31) || y >= pow(2, 31))
    {
      return 0;
    }
    return y;
  }
};