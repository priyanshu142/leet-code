class Trie
{
public:
  vector<string> s;
  Trie()
  {
  }

  void insert(string word)
  {
    s.push_back(word);
  }

  bool search(string word)
  {
    for (auto it : s)
    {
      if (it == word)
      {
        return true;
      }
    }
    return false;
  }

  bool startsWith(string prefix)
  {
    for (auto it : s)
    {
      int k = 0;
      for (int i = 0; i < prefix.size(); i++)
      {
        if (it[i] == prefix[i])
        {
          k++;
          continue;
        }
        else
          break;
      }
      if (k == prefix.size())
      {
        return true;
      }
    }
    return false;
  }
};