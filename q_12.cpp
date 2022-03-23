class Solution
{
public:
  string intToRoman(int num)
  {
    string x;

    while (num > 0)
    {
      if (num == 4)
      {
        x = x + "IV";
        num = num - 4;
      }

      else if (num == 9)
      {
        x = x + "IX";
        num = num - 9;
      }
      else if (num >= 40 && num < 50)
      {
        x = x + "XL";
        num = num - 40;
      }
      else if (num >= 90 && num < 100)
      {
        x = x + "XC";
        num = num - 90;
      }
      else if (num >= 400 && num < 500)
      {
        x = x + "CD";
        num = num - 400;
      }
      else if (num >= 900 && num < 1000)
      {
        x = x + "CM";
        num = num - 900;
      }
      else if (num >= 1000)
      {
        x = x + "M";
        num = num - 1000;
      }
      else if (num >= 500)
      {
        x = x + "D";
        num = num - 500;
      }
      else if (num >= 100)
      {
        x = x + "C";
        num = num - 100;
      }
      else if (num >= 50)
      {
        x = x + "L";
        num = num - 50;
      }
      else if (num >= 10)
      {
        x = x + "X";
        num = num - 10;
      }
      else if (num >= 5)
      {
        x = x + "V";
        num = num - 5;
      }
      else if (num >= 1)
      {
        x = x + "I";
        num = num - 1;
      }
    }

    return x;
  }
};