#include "main.h"

int main(int argc , int* argv[])
{
    float Data[7] = {10,13,11,23,52,45,16};
    InsertionSort(Data,7);
    OutputList_float(Data , 7);

    return 0;
}
