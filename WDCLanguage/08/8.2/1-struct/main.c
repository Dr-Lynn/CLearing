#include <stdio.h>

struct student{
    int num;
    char name[20];
    char sex;
    int age;
    float score;
};
int main() {
    struct student s = {1001,"lele",'M',20,85.4};
    struct student sarr[3];
    int i;
    s.num = 1003;
    printf("%d %s %c %d %f\n",s.num,s.name,s.sex,s.age,s.score);
    printf("------------------------------------\n");

    scanf("%d%s %c%d%f",&s.num,s.name,&s.sex,&s.age,&s.score);
    //多一个空格接收输入时的空格，否则接收不到s.sex的字符
    printf("%d %s %c %d %f\n",s.num,s.name,s.sex,s.age,s.score);
    printf("------------------------------------\n");

    i = 0;
    sarr[i] = s;
    printf("%d %s %c %d %f\n",sarr[i].num,sarr[i].name,sarr[i].sex,sarr[i].age,sarr[i].score);
    return 0;
}
