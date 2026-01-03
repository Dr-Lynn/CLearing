#include <stdio.h>
//阶乘
int f(int n)
{
    if(1 == n) return 1;
    return n*f(n-1);
}
//上n个台阶共有多少种方法
int step(int n)
{
    if(1 == n||2 == n) return n;
    return step(n-1)+step(n-2);
}
int main() {
    int n = 4;
    //printf("n! = %d\n",f(n));
    printf("step(%d) = %d\n",n, step(n));
    return 0;
}
