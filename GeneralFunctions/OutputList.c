#include "OutputList.h"

int OutputList_int(int* DHead , int DNum)
{
    for(int i = 0;i < DNum;i++)
    {
        printf("%d\t",DHead[i]);
    }
    return 0;
}

int OutputList_float(float* DHead , int DNum)
{
    for(int i = 0;i < DNum;i++)
    {
        printf("%f\t",DHead[i]);
    }
    return 0;
}
