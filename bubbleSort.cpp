#include <iostream>
#include <vector>

using namespace std;

int main()
{
  // fill vector full of values
  vector<int> nums = {47, 9, 541, 163, 74, 438, 42, 3, 801, 92, 4, 552, 55, 52, 87, 762, 5};
  // checker to determine when to exit while loop
  int checker = 0;
  // iterator i could be used instead...
  int i = 0;
  // while loop runs traverses the vector as many times as needed to get it sorted.
  // It goes through the loop over and over until it has flipped all the values into the spots they need to be in
  while (checker != nums.size())
  {
    // for loop for individual traversals, using a tmp variable to help flip adjacent values when needed
    for (int i = 0; i < nums.size() - 1; i++)
    {
      if (nums[i + 1] < nums[i])
      {
        int tmp = nums[i];
        nums[i] = nums[i + 1];
        nums[i + 1] = tmp;
      }
    }
    checker++;
    i++;
  }
  // range based for loop to print out the sorted vector
  for (int x : nums)
  {
    cout << x << " ";
  }
  return 0;
}