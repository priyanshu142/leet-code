#include <iostream>
#include <string>
using namespace std;
int search(int g, int x[])
{
  int start = 'a';
  int z = g - start;
  for (int i = 0; i < 12; i++)
  {
    if (z == 0)
    {
      break;
    }
    if (z < 0)
    {
      x[0] = 4;
      x[1] = 2;
      z = g - 48;

      if (z > 3)
      {
        x[0] = 5;
        z - 3;
      }
      for (int j = 0; j < 6; j++)
      {
        if (z == 0)
        {
          break;
        }
        else
        {
          z--;
          x[1]++;
        }
      }
      break;
    }

    else if (z > 5)
    {
      x[0] = x[0] + 1;
      z = z - 6;

      continue;
    }
    else
    {
      x[1] = x[1] + 1;
      z = z - 1;
    }
  }
  return 0;
}

void move(int a[], int x[])
{
  for (int i = 0; i < 12; i++)
  {

    if (a[0] == x[0] && a[1] == x[1])
    {
      break;
    }
    else if (a[0] < x[0])
    {
      cout << "d ";
      a[0]++;
      continue;
    }
    else if (a[0] > x[0])
    {
      cout << "u ";
      a[0]--;
    }
    else if (a[1] < x[1])
    {
      cout << "r ";
      a[1]++;
    }
    else if (a[1] > x[1])
    {
      cout << "l ";
      a[1]--;
    }
  }
}

int main()
{
  cout << "enter the string";
  string s;
  cin >> s;
  int x[2] = {0, 0};

  int a[2] = {0, 0};
  for (int i = 0; i < s.size(); i++)
  {
    x[0] = 0;
    x[1] = 0;
    int g = s[i];
    int start = 'a';
    int p = search(g, x);
    move(a, x);
  }
}