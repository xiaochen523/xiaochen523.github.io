#include<stdio.h>
void main()
{
    unsigned result; 									/*定义无符号变量*/
    int age1, age2;
    printf("请输入第一个人年龄:");
    scanf("%d",&age1);
    printf("请输入第二个人年龄:");
    scanf("%d",&age2);
	printf("-*-*-*-*-*-*-*-*-*-*\n");
    printf("  age1=%d,age2=%d\n", age1, age2);
	printf("-*-*-*-*-*-*-*-*-*-*\n\n");
    result = age1&age2; 										/*计算与运算的结果*/
	printf("@*@*@*@*@*@*@*@*@*@*@*@*\n");
    printf("   age1&age2=%u\n", result);
	printf("@*@*@*@*@*@*@*@*@*@*@*@*\n");
}
