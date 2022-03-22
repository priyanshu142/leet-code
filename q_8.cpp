class Solution
{
public:
  int myAtoi(string s)
  {
    double fin = 0;
    int flag = 0;
    int sign = 0;
    int k = s.size();
    for (int i = 0; i < k; i++)
    {
      if (fin > pow(2, 31) && sign == 1)
      {
        fin = -pow(2, 31);
        return fin;
      }
      else if (fin >= pow(2, 31))
      {
        fin = pow(2, 31) - 1;
        return fin;
      }
      else if (s[i] == ' ' && flag == 0)
      {
        continue;
      }
      else if (s[i] >= 48 && s[i] <= 57)
      {
        int l = s[i] - 48;
        fin = fin * 10 + l;
        flag = 1;
      }
      else if (s[i] == '-' && flag == 0)
      {
        sign = 1;
        flag = 1;
      }
      else if (s[i] == '+' && flag == 0)
      {
        flag = 1;
      }
      else
      {
        break;
      }
    }
    if (fin >= pow(2, 31) && sign == 1)
    {
      fin = -pow(2, 31);
      return fin;
    }
    else if (fin >= pow(2, 31))
    {
      fin = pow(2, 31) - 1;
      return fin;
    }

    if (sign == 1)
    {
      fin = fin * -1;
    }
    return fin;
  }
};