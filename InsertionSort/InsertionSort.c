#include "InsertionSort.h"

int InsertionSort(float* DHead , int DLength)
{
    //Variables Declaration
    int j=0,i=0;
    //Function Realization
    for(j=2;j<DLength;j++)
    {
        int key = DHead[j];
        i = j-1;
        while(i>0 && DHead[i]>key)
        {
            DHead[i+1] = DHead[i];
            i = i-1;
        }
        DHead[i+1] = key;
    }

    return 0;
}
