#include <iostream>
#include <stdio.h>

void ModifyNum(int &b){
    b = b+1;
}
int main() {
    int a = 10;
    ModifyNum(a);
    printf("after ModifyNum a = %d\n",a);
    return 0;
}
