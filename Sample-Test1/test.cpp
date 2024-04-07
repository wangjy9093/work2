#include "pch.h"

#include <gtest/gtest.h>


TEST(MaxSubArrayTest, OnlyPositiveElement) {
    int num[] = { 9 };
    int numsize = sizeof(num) / sizeof(int);
    EXPECT_EQ(maxSubArray(num, numsize), 9);
}

TEST(MaxSubArrayTest, OnlyNegativeElement) {
    int num[] = { -9 };
    int numsize = sizeof(num) / sizeof(int);
    EXPECT_EQ(maxSubArray(num, numsize), -9);
}

TEST(MaxSubArrayTest, AllPositive) {
    int num[] = {1, 2, 3, 4, 5, 6};
    int numsize = sizeof(num) / sizeof(int);
    EXPECT_EQ(maxSubArray(num, numsize), 21);
}

TEST(MaxSubArrayTest, AllNegative) {
    int num[] = { -3, -4, -5 ,-2};
    int numsize = sizeof(num) / sizeof(int);
    EXPECT_EQ(maxSubArray(num, numsize), -2);
}

TEST(MaxSubArrayTest, Mix) {
    int num[] = { -2, 1, 6, 4, -1, -9 };
    int numsize =sizeof(num) / sizeof(int);
    EXPECT_EQ(maxSubArray(num, numsize), 11);
}

TEST(MaxSubArrayTest, Zero) {
    int num[] = { 0, 0, 0, 0, 0, 0, 0 };
    int numsize = sizeof(num) / sizeof(int);
    EXPECT_EQ(maxSubArray(num, numsize), 0);
}

TEST(MaxSubArrayTest, MultipleMaxSubarrays) {
    int num[] = { -1, 2, -1, 2, -1, 2 };
    int numsize = sizeof(num) / sizeof(int);
    EXPECT_EQ(maxSubArray(num, numsize), 4);
}
