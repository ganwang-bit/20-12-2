//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//#pragma pack(1)
//struct S
//{
//    char c1;
//    double d;
//};
//#pragma pack()
//int main()
//{
//    struct S s;
//    printf("%d\n",sizeof(s));
//    return 0;
//}
//#include<stdio.h>
//#include<stddef.h>
//struct S
//{
//    char c;//偏移量是0
//    int i;//偏移量是4
//    double d;//偏移量是8
//};
//int main()
//{
//    printf("%d\n",offsetof(struct S,i));//计算结构体成员相对于结构体首地址偏移量-宏 size_t offsetof(structName,memberName);
//    printf("%d\n",offsetof(struct S,d));
//    printf("%d\n",offsetof(struct S,c));
//    return 0;
//}
//memset
//memmove
//memcpy
//#include<stdio.h>
//struct S
//{
//    char name[20];
//    int age;
//    int weight;
//    int hight;
//};
//void Init(const struct S*tmp)
//{
//    char arr[]="qwrewr";
//    tmp->name[0]=arr[0];
//    tmp->hight =20;
//    tmp->weight =50;
//}
//int main()
//{
//    struct S s={0};
//    Init(&s);
////    s.name="wang";
////    s.age=20;
////    s.weight=60;
////    s.hight=170;
//    return 0;
//}
//void a(char arr[])
//{
//    arr[0]='1';
//}
//void main()
//{
//    char b[]={0};
//    a(b);
//}
#include<stdio.h>
struct S
{
    char name[20];
    int age;
    int weight;
};
int main()
{

    return 0;
}
