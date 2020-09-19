#include "Compare.h"

int CompareF(float a , float b)
{
    if(fabs(a-b) < EPSILON)
        return 1;
    else
    {
        return 0;
    }  
}
