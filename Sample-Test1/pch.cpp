//
// pch.cpp
//

#include "pch.h"
int maxSubArray(int* num,int numsize)
{
     if (numsize == 0)
        return 0;
    int i, max = num[0], t = 0;    //����max�������ڴ洢�������ͣ�t�����洢��ǰ�����
    for (i = 0; i < numsize; i++)
    {
        if (t + num[i] >num[i])       //����ǰ����ͼӵ�ǰ�����ڵ�ǰ���У����֮
            t = t + num[i];
        else
            t = num[i];                  //��֮�������ã��Ե�ǰ��Ϊ�����
        if (t > max)                   //�Ƚϣ��滻
            max = t;
    }
    return max;
}