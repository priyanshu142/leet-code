class Solution
{
public:
  int strStr(string haystack, string needle)
  {
    int x = haystack.size();
    int y = 0;
    int j = 0;
    int k = 0;
    int h = 0;
    int z = needle.size();
    if (x == 0 && z != 0)
    {
      return -1;
    }
    else if (x == 0 && z == 0)
    {
      return 0;
    }
    for (int i = 0; i < x; i++)
    {
      if (haystack[i] == needle[j])
      {
        if (k == 0)
        {
          h = i;
          k++;
        }

        j++;
      }
      else
      {
        j = 0;
        if (k > 0)
        {
          i = h;
        }
        k = 0;
      }
      if (j == z)
      {
        return h;
      }
    }
    return -1;
  }
};