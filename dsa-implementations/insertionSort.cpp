#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {11, 5423, 8743, 3452, 43256, 769, 434, 9875, 56785, 245, 132423, 5668, 97887, 764, 567445};

    //traversing the vector
    for (int i = 0; i <= nums.size(); i++)
    {
        //setting  variable = to current index in traversal in order to perform eqaulity comparisons
        int j = i;
        while (j > 0 && nums[i] < nums[j - 1]) //checking that current value to sort is greater/less than next index value
          j--; //if less decrement j value to sort current index
        int tmp = nums[i];
        //if j was decremented this loop will insert value into proper place in the vector
        for (int k = i; k > j; k--)
        {
            nums[k] = nums[k - 1];
        }
        //place sorted value into correct place in vector once sorted via above for loop
        nums[j] = tmp;
    }

    return 0;
}
