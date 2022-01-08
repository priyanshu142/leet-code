class Solution
{
public:
  int numberOfBeams(vector<string> &bank)
  {
    int total = 0, b = 0, c = 0, d = 0;
    for (int x = 0; x < bank.size(); x++)
    {
      int a = 0;
      for (int y = 0; y < bank[x].size(); y++)
      {
        if (bank[x][y] == '1')
        {
          a++;
        }
      }
      if (a == 0 && b == 0)
      {
        total = 0;
      }
      else if (a == 0)
      {
        continue;
      }
      else
      {
        d = c * a;
        c = a;
        total = total + d;
        b++;
      }
    }
    return total;
  }
};
