#include <stdio.h>

int fibo(int n)
{
    if(0 == n || 1 == n) return n;
    return fibo(n-1)+fibo(n-2);
}
int main() {
    int n = 15;
    printf("Fibo = %d\n",fibo(n));
    return 0;
}
