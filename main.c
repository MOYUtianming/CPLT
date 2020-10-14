#include "main.h"
#include "stdio.h"//printf scanf

/**
 * @brief  the main function for test.
 * @note   
 * @param  argc: the input parameters' number.
 * @param  argv[]: the input parameters' location.
* @retval  0
 */
int main(int argc , int* argv[])
{
    int N=0;
    scanf("%d",&N);
    while(N<=0)
    {
        printf("illegal input");
        scanf("%d",&N);
    }

    if(N%100!=0&&N%4==0||N%400==0)
    {
        printf("the number is right\n");
    }
    else
    {
        printf("it's not the point year num\n");
    }

    return 0;

}
