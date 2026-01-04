#include <stdio.h>

struct student_type1{
    double score;//8字节
    int height;
    short age;//2字节
};
struct student_type2{
    int height;//4字节
    char sex;
    short age;
};

int main() {
    struct student_type1 s1 = {4,5,6};
    struct student_type2 s2 = {7,'m',8};
    printf("s1 size = %u\n",sizeof(s1));//%u是长整型，按字节个数计算
    printf("s2 size = %u\n",sizeof(s2));
    return 0;
}
