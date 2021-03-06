#include<stdio.h>
#include<stdint.h>
#include"memory.h"
#include"project_1.h"


int8_t my_memmove(uint8_t *src, uint8_t *dst, uint32_t length);
int8_t my_memzero(uint8_t *src, uint32_t length);                                            //Function definition to zero out given length of bytes in the memory                                                                                                                                        //Function definition to move data from one location to other location

void project_1_report()
{

    uint8_t array[32];

    uint8_t *aptr_1=NULL, *aptr_2=NULL , *aptr_3= NULL, data=31;
    uint32_t i=0;

    aptr_1=(array);
    aptr_2=(array+8);
    aptr_3=(array+16);

    for(i=0;i<=15;i++)
    {
    *(aptr_1 + i)=data;
    data++;
    }

    my_memzero(aptr_3, 16);
 
    my_memmove(aptr_1, aptr_3, 8);

    my_memmove(aptr_2, aptr_1, 16);

    my_reverse(aptr_1, 32);

    for(i=0;i<=31;i++)
    {
    printf("The value in byte %d is:%d \n",i,*(array+i));
    }

}

    
