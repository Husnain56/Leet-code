#include <iostream>

int findClosestNumber(int nums[5])
{

    int num = nums[0];
    
    for (int i = 1; i < 5; i++) 
    {
        if (abs(nums[i]) < abs(num))     
        {
            num = nums[i];
        }
        else if (abs(nums[i]) == abs(num))
        {
            num = std::max(num, nums[i]);
        }
    }

    return num;
}

int main()
{

    int nums[5] = {-11, -5, -4, 5, 11};
    int num = findClosestNumber(nums);

    std::cout << "Closest Numnber to 0: " << num << "\n";

    return 0;
}