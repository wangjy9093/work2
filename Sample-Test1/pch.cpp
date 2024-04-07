//
// pch.cpp
//

#include "pch.h"
int maxSubArray(int* num,int numsize)
{
     if (numsize == 0)
        return 0;
    int i, max = num[0], t = 0;    //创建max变量用于存储最大子序和，t用来存储当前子序和
    for (i = 0; i < numsize; i++)
    {
        if (t + num[i] >num[i])       //若当前子序和加当前数大于当前序列，则加之
            t = t + num[i];
        else
            t = num[i];                  //反之，则弃置，以当前数为子序和
        if (t > max)                   //比较，替换
            max = t;
    }
    return max;
}