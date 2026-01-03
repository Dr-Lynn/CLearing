//
// Created by Lynn on 2026/1/3.
//
#include "fun.h"

int printstar(int i)
{
    printf("******************\n");
    printf("printstar %d\n",i);
    return i+3;
}

void print_message()
{
    printf("how do you do\n");
    printstar(3);
}

