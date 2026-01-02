#include <stdio.h>
void print(char c[])
{
    int i = 0;
    while(c[i])
    {
        printf("%c",c[i]);
        i++;
    }
}
void change(char *d)
{
    *d = 'H';
    d[1] = 'E';
    *(d+2) = 'L';
}

#define N 5
int main(){
//    char c[6] = {'h','e','l','l','o'};//数组长度要比字符串多一个，因为要保存\0
//    char d[4] = "how";
//    printf("%s\n",c);
//    printf("%s\n",d);
//    print(d);
//      char c[20];
//      gets(c);
//      puts(c);
//      int n;
//      scanf("%d",&n);
//      int a[100],count = 0;
//      for(int i=0;i<n;i++)
//    {
//
//        scanf("%d",&a[i]);
//        if(a[i] == 2) count++;
//
//    }
//      printf("%d\n",count);
//      char c[10] = "hello";
//      change(c);
//      puts(c);
      int a[N] = {1,2,3,4,5};
      int *p;
      int i;
      p = a;
      for(i = 0;i<N;i++)
      {
          printf("%3d",*(p+i));
      }
      printf("\n-------------\n");
      p = &a[4];
      for(i = 0;i<N;i++)
      {
          printf("%3d",*(p-i));
      }
      printf("\n");


    return 0;
}
