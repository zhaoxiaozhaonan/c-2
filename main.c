#include <stdio.h>
int index = 0;
char arr[1024];
int ismingan(char x){
    int count=0;
    
    
    for(int i = 0; i < index; i++)
    {
        
        if (x==arr[i]) {
            count++;
        }
        
    }
    
    if (count==0) {
        return 0;
    }else{
        return 1;
    }
    
    
    
}
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
            printf("请输入一个敏感字符\n");
            char m;
            scanf("%c", &m);
            scanf("%c", &m);
            arr[index] = m;
            index++;
            printf("添加成功，点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 2)
        {

            if (index >= 1)
            {
                index--;
                printf("删除成功，点击回车继续\n");
            }
            else
            {
                printf("删除失败，点击回车继续\n");
            }
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 3)
        {

            for (int i = 0; i < index; i++)
            {
                printf("第%d个敏感字符为%c\n", i + 1, arr[i]);
            }
            printf("显示成功，点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 4)
        {
            printf("请输入一段英文\n");
            char neirong[1024];
            scanf("%s", neirong);

            for (int i = 0; 1; i++)
            {

                if (neirong[i]=='\0')
                {
                    break;
                }

                if (ismingan(neirong[i]) == 1)
                {
                    neirong[i] = '*';
                }
                printf("%c", neirong[i]);
            }
            printf("替换成功，点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 5)
        {
            printf("点击回车，退出系统\n");
            break;
        }
    }

    return 0;
}