#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    int num;
    char name[20];
    char sex;
};
int main() {
    struct student s = {1001,"wangle",'M'};
    struct student sarr[3] = {1001,"lilei",'M',1005,"zhangsan",'M',1007,"lili",'F'};
    //给结构体数组初始化赋值
    struct student *p;
    p = &s;
    printf("%d %s %c\n",(*p).num,(*p).name,(*p).sex);
    printf("%d %s %c\n",p->num,p->name,p->sex);

    printf("------------------------------------\n");

    p = sarr;
    printf("%d %s %c\n",(*p).num,(*p).name,(*p).sex);
    printf("%d %s %c\n",p->num,p->name,p->sex);

    printf("------------------------------------\n");

    p = p+1;
    printf("%d %s %c\n",(*p).num,(*p).name,(*p).sex);
    printf("%d %s %c\n",p->num,p->name,p->sex);

    printf("------------------------------------\n");

    p = (struct student*)malloc(sizeof(struct student));
    p->num = 1006;
    p->sex = 'M';
    //p->name = 字符串不能直接赋值，需要用库函数strcpy()
    strcpy(p->name,"longge");
    printf("%d %s %c\n",p->num,p->name,p->sex);
    return 0;
}
