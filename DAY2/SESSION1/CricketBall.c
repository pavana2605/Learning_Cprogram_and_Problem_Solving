#include <stdio.h>
#include <stdbool.h>

bool canJump(int nums[], int numsSize) {
    int n=sizeof(nums)/sizeof(nums[0]);
    int maxReach = 0;

    for (int i = 0; i < numsSize; i++) {
        if (i > maxReach) {
            return false;
        }

        if (i + nums[i] > maxReach) {
            maxReach = i + nums[i];
        }
    }

    return true;
}

int main() {
    int nums[] = {2, 3, 1, 1, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    if (canJump(nums, numsSize)) {
        printf("true\n");
    } else {
        printf("false\n");
    }   
    return 0;
}
