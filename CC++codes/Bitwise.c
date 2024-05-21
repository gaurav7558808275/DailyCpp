#include "stdio.h"





// to set a bit

int SetBit(int num, int pos)
{
    num |= (1<<pos); 
}

// to clear a it
int ClearBit(int num , int pos)
{
    num &= ~(1<<pos);
}

// to toggle a bit

int ToggleBit(int pos ,int num)
{
    num ^= (1 << pos);
}

// to check nth bit is set or not

int CheckSetBit(int num, int pos)
{
    int bit = num &(1<<pos);
    return bit;
}

// internting all number

//int num = 200;
//int invnum = ~(num);

//lowest set bit
void lowestSetBit(int num)
{
    int ret = (num & (-num));
    printf("%d",ret);
}

int main()
{
    int a = 10;
    
    lowestSetBit(3);


}