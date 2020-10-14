#include "MergeSort.h"
// sentry;

int Merge_int(int* DHead , int DL , int Mp , int DR)
{
    int LNum = Mp-DL+1;
    int RNum = DR-Mp;
    int* L = malloc(LNum+1);
    int* R = malloc(RNum+1);
    int flag = 0;
//copy left part of specialized snippet of the origin data.
//in other words , from DL to Mp;
    for(flag = 0;flag<LNum;flag++)
    {
        L[flag] = DHead[DL+flag];
    }
//copy left part of specialized snippet of the origin data.
//in other words , from Mp+1 to DR;
    for(flag = 0;flag<RNum;flag++)
    {
        R[flag] = DHead[Mp+1+flag];
    }
//the sentry flag is used to escape from check array overflow each time.
    L[LNum] = INT_MAX;
    R[RNum] = INT_MAX;
//be careful about Lp and Rp.
    int Lp = 0;
    int Rp = 0;
//run DR-DL+1 times;
    for (flag = DL ;flag<=DR ; flag++)
    {
        //be careful about array overflow
        if(L[Lp]<=R[Rp])
        {
            DHead[flag] = L[Lp];
            Lp++;
        }
        else
        {
            DHead[flag] = R[Rp];
            Rp++;
        }
    }
    //OutputList_int(DHead , 7);

    return 0;
}

int MergeSort_int(int* DHead , int DL , int DR)
{
    if(DL<DR)
    {
        int Mp = (DL+DR)/2;
        MergeSort_int(DHead , DL   , Mp);
        MergeSort_int(DHead , Mp+1 , DR);

        Merge_int(DHead , DL , Mp , DR);
    }
    return 0;
}

int Merge_float(float* DHead , int DL , int Mp , int DR)
{
    int LNum = Mp-DL+1;
    int RNum = DR-Mp;

    float* L = malloc(LNum+1);
    float* R = malloc(RNum+1);

    int flag = 0;
    for(flag = 0;flag<LNum;flag++)
    {
        L[flag] = DHead[DL+flag];
    }
    for(flag = 0;flag<RNum;flag++)
    {
        R[flag] = DHead[Mp+1+flag];
    }

    L[LNum] = INFINITY;
    R[RNum] = INFINITY;

    int Lp = 0;
    int Rp = 0;
    for(flag = DL;flag<=DR;flag++)
    {
        if(CompareF(L[Lp],R[Rp]) || L[Lp]<R[Rp])
        {
            DHead[flag] = L[Lp];
            Lp++;
        }
        else
        {
            DHead[flag] = R[Rp];
            Rp++;
        }
    }
    OutputList_float(DHead , 7);

    return 0;
}

int MergeSort_float(float* DHead , int DL , int DR)
{

    if(DL<DR)
    {
        int Mp = (DL+DR)/2;
        MergeSort_float(DHead , DL , Mp);
        MergeSort_float(DHead , Mp+1 , DR);

        Merge_float(DHead , DL , Mp , DR);
    }

    return 0;
}
