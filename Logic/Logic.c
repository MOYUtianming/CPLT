#include "Logic.h"

/**
 * @brief  reverse the whole bits' Values in the number.
 * @note   
 * @param  Num: the origin number
 * @param  Mask: the mask code
 * @retval 
 */
unsigned int BRevA(unsigned int Num)
{
    unsigned int num = ~Num;
    return num;
}

/**
 * @brief  control Special bits' Values;
 * @note   
 * @param  Num: the origin number
 * @param  mask: the mask code
 * @param  Type: chosen from SpecialBitTo0,SpecialBitTo1,SpecialBitReverse.
 * @retval 
 */
unsigned int BConfigCtrl(unsigned int Num , unsigned int mask , char Type)
{
    unsigned int num = 0;
    if(Type == SpecialBitTo0)
        {
            num = Num&mask;
        }
    else if(Type == SpecialBitTo1)
        {
            num = Num|mask;
        }
    else if(Type == SpecialBitReverse)
        {
            num = Num^mask;
        }
    else
        printf("error Type");
    return num;
}
