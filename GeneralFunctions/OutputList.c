#include "OutputList.h"

int OutputList_int(int* DHead , int DNum)
{
	int i = 0;
    for(i = 0;i < DNum;i++)
    {
        printf("%d",DHead[i]);
        if(i<DNum-1)
		{
			printf("\t");
		}
		else
		{
			puts("\nEND\n");
		}
    }
    return 0;
}

int OutputList_float(float* DHead , int DNum)
{
	int i = 0;
    for(i = 0;i < DNum;i++)
    {
        printf("%f",DHead[i]);
        if(i<DNum-1)
		{
			printf("\t");
		}
		else
		{
			puts("\nEND\n");
		}
    }
    return 0;
}
