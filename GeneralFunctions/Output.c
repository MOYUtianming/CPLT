#include "Output.h"
/**
 * @brief  print integer numbers list
 * @note   
 * @param  DHead: the point towards the data head.
 * @param  DNum: the number of numbers which needed to be printed.
 * @retval 
 */
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
		else if(i%5 == 0)
		{
			printf(";\n");
		}
		else
		{
			puts("\nEND\n");
		}
    }
    return 0;
}
/**
 * @brief  print float numbers list
 * @note   
 * @param  DHead: the point towards the data head.
 * @param  DNum: the number of numbers which needed to be printed.
 * @retval 
 */
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
/**
 * @brief  output power's value.
 * @note   
 * @param  base: base of the number
 * @param  index: index of the number
 * @retval 0
 */
int power(int base,int index)
{
    int B_index=index;
    int buf=base;
    while(B_index-1>0)
    {
        B_index--;
        buf*=base;
    }
    return buf;
}
