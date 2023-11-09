#include <stddef.h>

float finduniq(const float *nums, size_t n)
{
  if (n == 0) {
        return 0.0; 
    }

    float uniqueNum;
    float num1 = nums[0];
    float num2;

    for (size_t i = 1; i < n; i++) {
        if (nums[i] != num1) {
            num2 = nums[i];
            break;
        }
    }

    int count1 = 0, count2 = 0;
    for (size_t i = 0; i < n; i++) {
        if (nums[i] == num1) {
            count1++;
        } else if (nums[i] == num2) {
            count2++;
        }
    }

    if (count1 == 1) {
        uniqueNum = num1;
    } else {
        uniqueNum = num2;
    }

    return uniqueNum;
  
}