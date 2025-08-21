#include <iostream>
#include <vector>
using namespace std;

int singleElem(vector<int> arr)
{
  int a = arr.size();

  if (a == 1)
    return arr[0];
  int start = 0;
  int end = arr.size() - 1;

  while (start <= end)
  {
    int mid = start + (end - start) / 2;

    if (mid == 0 && arr[0] != arr[1])
      return arr[mid];
    if (mid == a - 1 && arr[a - 1] != arr[a - 2])
      return arr[mid];

    if (arr[mid - 1] != arr[mid] && arr[mid + 1] != arr[mid])
    {
      return arr[mid];
    }

    if (mid % 2 == 0)
    {

      if (arr[mid - 1] == arr[mid])
      {
        end = mid - 1;
      }
      else
      {
        start = mid + 1;
      }
    }
    else
    {

      if (arr[mid - 1] == arr[mid])
      {
        start = mid + 1;
      }
      else
      {
        end = mid - 1;
      }
    }
  }

  return -1;
}

int main()
{
  vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 10};
  cout << "The single element is: " << singleElem(arr) << endl;

  return 0;
}
