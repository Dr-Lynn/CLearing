# 7.2 函数的声明与调用

1.  在项目中新建.c或.h文件：右键项目名新建，勾选“添加到目标”，保证这些文件和main函数文件编译到同一个可执行程序中：

   在CMakeLists.txt文件中的代码：

`add_executable(1_function main.c fun.c fun.h)`包含了已经定义的三个文件

2.  引用自定义文件：`#include "fun.h"`

3.  ctrl +鼠标左键点击任意函数，可以跳转至查看该函数的代码
4. 函数不能嵌套定义，可以互相调用但不能调用main函数

# 7.3 递归(见递归专门文档)

f(n) = n*f(n-1)  递归的核心是找公式

# 8.2 结构体、结构体数组、结构体对齐

1. 结构体类型声明最后一定要加分号

2. 定义结构体变量时，必须使用`struct student`进行定义

3. 结构体初始化只能在一开始定义时进行:`struct student s = {1001,"lele",20,65,"shenzhen"};`如果s已经定义，则只能对它的每个成员单独赋值：`s.num = 1003;`
4. 结构体对齐三大法则：

自然对齐：每个成员的地址是其数据类型大小的整数倍（如int会被对齐到4字节边界）

填充字节：如果一个成员大小不成对齐边界的整数倍，编译器会添加填充字节以确保下一个成员能够正确对齐

结构体总大小：通常是其最大成员大小的整数倍，确保结构体数组的每个元素都按照相同的规则对其

eg：一个结构体元素最大的是double类型，则结构体的大小是8的整数倍（字节个数）

`sizeof(s1) //计算出s1包含多少个字节`

# 8.3 结构体指针和typedef

1. 一个结构体变量的指针就是该变量所占据的内存段的起始地址，结构体指针可以访问结构体内的每个成员
2. 结构体指针可以指向结构体数组，其中保存的是结构体数组的首地址：

```c
struct student sarr[3] = {1001,"lilei",'M',1005,"zhangsan",'M',1007,"lili",'F'};
//给结构体数组初始化赋值
struct student *p;
p = &sarr;
printf("%d %s %c\n",p->num,p->name,p->sex);
```

结构体指针可以自+1来指向数组的下一个元素：

`p = p+1;` 偏移量为一个该类型的大小

3. 给结构体指针申请空间并赋值：

```c
p = (struct student*)malloc(sizeof(struct student));
//申请一块结构体大小的空间，malloc会返回int类型，所以要强制转换成结构体指针类型
p->num = 1006;
p->sex = 'M';
strcpy(p->name,"longge");
//p->name = "longge";字符串不能直接赋值，需要用库函数strcpy()
```

4. 结构体指针p的大小仍然是一个int类型指针的大小，但它之前申请的空间的大小为结构体的大小：

![](D:\Documents\code\C&C++Learning\WDCLanguage\imgs\屏幕截图 2026-01-04 170611.png)

5. typedef可以用来简化结构体名称（取别名）

```c
typedef struct student{
    int num;
    char name[20];
    char sex;
}stu,*pstu;
//stu等价于struct student，pstu等价于struct student*
//stu s = {1001,"wangle",'M'};
//pstu p;等价于stu *p; 定义一个结构体指针变量
//p = &s;

typedef int INTEGER;
//一个整形的别名
```

