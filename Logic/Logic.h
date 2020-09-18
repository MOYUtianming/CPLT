#ifndef _LOGIC_H_
#define _LOGIC_H_

//Standard libs
#include <stdio.h>

#define SpecialBitTo0       0
#define SpecialBitTo1       1
#define SpecialBitReverse   2

unsigned int BRevA(unsigned int Num);
unsigned int BConfigCtrl(unsigned int Num , unsigned int Mask , char Type);

#endif
