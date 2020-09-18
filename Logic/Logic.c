#include "Logic.h"

/**
 * @brief  reverse the whole bits' Values in the number.
 * @note   
 * @param  Num: 
 * @param  Mask: 
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
 * @param  Num: 
 * @param  mask: 
 * @param  Type: 
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
