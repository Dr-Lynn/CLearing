#include <stdio.h>
//修改主函数一级指针变量的值
void ModifyPointer(int* &p,int *q)
//C++规定引用&必须和变量紧邻
{
    p = q;
}

int main() {
    int *p = NULL;
    int i = 10;
    int *q = &i;
    ModifyPointer(p,q);
    printf("after ModifyPointer *p = %d\n",*p);
    return 0;
}
