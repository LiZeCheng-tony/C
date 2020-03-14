#include<stdio.h>
#define num 59
#define MAX_LINE 1000000
int student_chinese[num];
int student_maths[num];
int student_english[num];
int student_name[MAX_LINE];
int name()
{
char szTest[1000] = {0};
int len = 0;
FILE *fp = fopen("name.txt", "r");
if(NULL == fp)
{
printf("failed to open dos.txt\n");
return 1;
}
while(!feof(fp))
{
memset(szTest,0, sizeof(szTest));
fgets(szTest,sizeof(szTest) - 1, fp); // 包含了换行符          
printf("%s",szTest);
}
fclose(fp);
printf("\n");
return 0;
}
int main()
{
    int a;
    name();
    printf("+----------------------+\n");
    printf("+   1.chinese          +\n");
    printf("+   2.maths            +\n");
    printf("+   3.english          +\n");
    printf("+----------------------+\n");
    printf(":");
    scanf("%d",&a);
    if (a==1)
    {
      chinese();
    }else if(a==2){
        maths();
    }else if(a==3){
        english();
    }else{
        printf("sorry,enter angin!");
        system("pause");
        main();
    }
}
int chinese()
{

}
int maths()
{

}
int english()
{

}