class Solution
{
public:
  double merge(const vector<int> &Arr, int start, int mid, int end)
  {

    int temp[end - start + 1];

    int i = start, j = mid + 1, k = 0;

    while (i <= mid && j <= end)
    {
      if (Arr[i] <= Arr[j])
      {
        temp[k] = Arr[i];
        k += 1;
        i += 1;
      }
      else
      {
        temp[k] = Arr[j];
        k += 1;
        j += 1;
      }
    }

    while (i <= mid)
    {
      temp[k] = Arr[i];
      k += 1;
      i += 1;
    }

    while (j <= end)
    {
      temp[k] = Arr[j];
      k += 1;
      j += 1;
    }

    for (int i = 0; i <= end; i++)
    {
      cout << temp[i];
    }

    if ((end + 1) % 2 != 0)
    {
      return temp[end / 2];
    }
    else
    {
      return (temp[end / 2] + temp[end / 2 + 1]) / 2.0;
    }
  }

  double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
  {
    int a = nums1.size();
    int b = nums2.size();
    int n = a + b;

    for (int i = 0; i < b; i++)
    {
      nums1.push_back(nums2[i]);
    }

    double x = merge(nums1, 0, a - 1, n - 1);

    return x;
  }
};
