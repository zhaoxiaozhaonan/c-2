#include <stdio.h>
int index=0;
char arr[1024];
int main()
{

    printf("进入敏感字符管理系统\n");

    while (1)
    {
        printf("1--添加一个敏感字符\n");
        printf("2--删除最后一个敏感字符\n");
        printf("3--显示所有敏感字符\n");
        printf("4--替换所有敏感字符\n");
        printf("5--退出系统\n");
        printf("请选择所需项目数字\n");
        int code;
        scanf("%d", &code);

        if (code == 1)
        {
        //  printf("请输入一个敏感字符\n");
        //  char m;
        //  scanf("%c",&m);
        //  scanf("%c",&m);

        }
        if (code == 2)
        {
            /* code */
        }
        if (code == 3)
        {
            /* code */
        }
        if (code == 4)
        {
            /* code */
        }
        if (code == 5)
        {
            printf("点击回车，退出系统\n");
        }
    }

    return 0;
}