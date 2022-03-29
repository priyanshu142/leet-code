class Solution
{
public:
  bool isValid(string s)
  {
    int x = s.size();
    if (x % 2 != 0)
    {
      return false;
    }
    else
    {
      stack<char> sta;
      for (int i = 0; i < x; i++)
      {
        if (sta.empty())
        {
          if (s[i] == '(' || s[i] == '[' || s[i] == '{')
          {
            sta.push(s[i]);
          }
          else
          {
            return false;
          }
        }
        else if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
          sta.push(s[i]);
        }
        else if (s[i] == ')')
        {
          if ('(' == sta.top())
          {
            sta.pop();
          }
          else
          {
            return false;
          }
        }
        else if (s[i] == '}')
        {
          if ('{' == sta.top())
          {
            sta.pop();
          }
          else
          {
            return false;
          }
        }
        else if (s[i] == ']')
        {
          if ('[' == sta.top())
          {
            sta.pop();
          }
          else
          {
            return false;
          }
        }
      }
      if (sta.empty())
      {
        return true;
      }
      else
        return false;
    }
  }
};