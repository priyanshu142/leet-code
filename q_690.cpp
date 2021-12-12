/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution
{
public:
  int getImportance(vector<Employee *> employees, int id)
  {

    int count = 0;
    for (int i = 0; i < employees.size(); i++)
    {
      if (employees[i]->id == id)
      {

        if (employees[i]->subordinates.size() == NULL)
        {
          count += employees[i]->importance;
          return count;
        }
        for (int j = 0; j < employees[i]->subordinates.size(); j++)
        {

          count = count + getImportance(employees, employees[i]->subordinates[j]);
        }
        count += employees[i]->importance;
      }
    }
    return count;
  }
};