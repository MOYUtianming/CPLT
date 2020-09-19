#ifndef _MERGESORT_H
#define _MERGESORT_H
//Used standard libs
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
//Used positive libs
#include "D:\MyWorkORLearning\UnifiedNationalGraduateEntranceExamination\Algorithms\GeneralFunctions\Compare.h"
#include "D:\MyWorkORLearning\UnifiedNationalGraduateEntranceExamination\Algorithms\GeneralFunctions\OutputList.h"
//Function declarations
int Merge_int(int* DHead , int DL , int Mp , int DR);
int MergeSort_int(int* DHead , int DL , int DR);
int Merge_float(float* DHead , int DL , int Mp , int DR);
int MergeSort_float(float* DHead , int DL , int DR);

#endif
