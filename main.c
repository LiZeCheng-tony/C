#include <stdio.h>
int a;
//人数
char student_name[];
//人名
int b;
//科目数

int name()
{
    FILE *fp;
    int flag,
        line = 0,
        count = 0;
    char c;
    // YES/NO

    if ((fp = fopen("name.txt", "r")) == NULL)
    {
        printf("无法打开\"naem.txt\"\n");
        printf("是否创建\"name.txt?\"\n");
        printf("Y/n:");
        scanf("%c", &c);
        if (c == 'Y' | c == 'y' | c == "\n" | c == "yes")
        {
            fp = fopen("name.txt", "w");
            write();
        }

        else
        {
            exit(1);
        }
    }

    while (!feof(fp))
    {
        flag = fgetc(fp);
        if (flag == '\n')
            count++;
    }

    line = count + 1;
    //加上最后一行
    printf("已读取配置文件%d行", line);
}

int write()
{
    FILE *fp;
    int c;
    //人数
    int n,y;
    //选择
    int x;
    //科目
    char h;
    //人名
    printf("输入总人数：\n");
    printf("选择科目：（1、语文2、数学3、英语4、历史5、政治6、地理7、生物),A(all)、(1-3、2)：");
    scanf("%d", &c);
    scanf("%d", &n);

    if (n == 'a' | n == 'A' | n == 'all' | n == 'ALL' | n == 'All')
    {
        x = 7;
    }

    else
    {
        x = n;
    }

    printf("输入人名,%d个\n", c);

for(int i;i<=c;i+1){
    // 输入人名
    
}
    printf("配置完毕\n");
    printf("%d\n%d\n", c, n);

    for (int i = 1; i <= c; i++)
    {
        printf("%c\n", student_name[i]);
    }
}

int main()
{
    system("cls");
    name();
}