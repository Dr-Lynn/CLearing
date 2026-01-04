#include <stdio.h>

typedef struct student{
    int num;
    float score;
}stu;

void change(stu &s){
    s.num = 2002;
    s.score = 85.0;
}
void change1(int *p)
{
    *p = 10;
}
int main() {
    stu s = {1001,90.5};
    printf("num:%d, score:%.1f\n",s.num,s.score);
    change(s);
    printf("after change, num:%d, score:%.1f\n",s.num,s.score);

//      int i = 4;
//      int *p = &i;
//      change1(p);
//      printf("%d\n",i);
    return 0;
}
