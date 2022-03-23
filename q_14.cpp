class Solution
{
public:
  string longestCommonPrefix(vector<string> &strs)
  {
    int x = 0;
    int i = -1;
    int j;
    string s = "";
    x = strs.size();
    if (x == 1)
    {
      cout << "yoo";
      return s + strs[0];
    }
    while (true)
    {
      i++;
      int p = 0;
      for (j = 0; j < x; j++)
      {
        if (p == 0)
        {
          int q = strs[j].size();
          p = 1;
          if (q == 0)
          {
            return s;
          }
        }

        else if (strs[0][i] == strs[j][i])
        {
          continue;
        }
        else
        {
          break;
        }
      }
      if (strs[0].size() <= i)
      {
        return s;
      }
      if (j == x && j != 0)
      {
        s = s + strs[0][i];
      }

      else
      {
        return s;
      }
    }
    return s;
  }
};