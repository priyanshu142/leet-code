class Solution
{
public:
  void rev(vector<char> &s, int start, int size)
  {
    if (start >= size)
    {
      return;
    }
    else
    {
      char c = s[start];
      s[start] = s[size];
      s[size] = c;
      rev(s, start + 1, size - 1);
    }

    return;
  }
  void reverseString(vector<char> &s)
  {
    int x = s.size();
    rev(s, 0, x - 1);
    return;
  }
};