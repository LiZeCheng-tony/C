#include<stdio.h>
#define num 59
int student_chinese[num];
int student_maths[num];
int student_english[num];
int student_name[1000];
int name()
{
char student_name[1000] = {0};
int len = 0;
FILE *fp = fopen("name.txt","r");
if(NULL == fp)
{
printf("failed to open dos.txt\n");
return 1;
}
while(!feof(fp))
{
memset(student_name,0, sizeof(student_name));
fgets(student_name,sizeof(student_name) - 1, fp);
printf("%s",student_name);
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