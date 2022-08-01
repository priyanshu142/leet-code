class Solution
{
public:
  vector<int> twoSum(vector<int> &numbers, int target)
  {
    vector<int> arr;
    int j = numbers.size() - 1;
    for (int i = 0; i < numbers.size(); i++)
    {
      if (numbers[i] + numbers[j] == target)
      {
        arr.push_back(i + 1);
        arr.push_back(j + 1);
        return arr;
      }
      else if (numbers[i] + numbers[j] < target)
      {
        continue;
      }
      else if (numbers[i] + numbers[j] > target)
      {
        j--;
        i--;
      }
    }
    return arr;
  }
};