
//IEEE 754 SP Converter

//  Created by Mordechai Bronfin on 11/19/18.
//  Wayne State University CSC 3100
//  Copyright © 2018 Mordechai Bronfin. All rights reserved.


#include<stdio.h>
#include <stdlib.h>

int binary_convertor(int a, int b);

typedef union
{
    float number;
    struct
    {
        unsigned int mantissa_sp : 23;
        unsigned int exponent_sp : 8;
        unsigned int sign_sp : 1;
    }bits;
}sN;

int main()
{
    sN sn;
    printf("************IEEE 754 Floating Point Single Precision Number Converter************\n");

        while(1)
        {
            
            printf("\nInput Float Number: ");
            scanf("%f",&sn.number);
            printf("\n");
            printf("%d ",sn.bits.sign_sp);
            binary_convertor(sn.bits.exponent_sp, 8);
            printf(" ");
            binary_convertor(sn.bits.mantissa_sp, 23);
            printf("\n");
        }
    
    
    return 0;
}

int binary_convertor(int a, int b)
{
    int c;
    for (b--; b >= 0; b--)
    {
        c = a >> b;
        if (c & 1)
            printf("1");
        else
            printf("0");
    }
    return 0;
}
