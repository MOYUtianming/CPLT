#ifndef _LOGIC_H
#define _LOGIC_H

//Used standard libs
#include <stdio.h>
//Local macros
#define SpecialBitTo0       0
#define SpecialBitTo1       1
#define SpecialBitReverse   2
//Function declarations
unsigned int BRevA(unsigned int Num);
unsigned int BConfigCtrl(unsigned int Num , unsigned int Mask , char Type);

#endif
