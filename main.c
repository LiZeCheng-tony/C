#include<stdio.h>
#define num 3
int student_chinese[num];
int student_maths[num];
int student_english[num];
int student_name[num];

int name()
{
    FILE *fp;
    int len;
    int a=1;
    char ch;
    if((fp=fopen("name.txt","r+"))==NULL)
    {
        printf("sorry,can't read name.txt!\n");
    }
    while((ch=fgetc(fp))!=EOF)
        if(ch==' ' || ch=='\t' || ch=='\n')
        {
            len++;
            a++;
        }
        else
        {
            student_name[a]=ch;
        }
    for (int i = 1; i <=num; i++)
    {
        printf("%s\n",student_name[a]);
    }
}
int main()
{
    int a;
    name();
    printf("+----------------------+\n");
    printf("+   1.chinese          +\n");
    printf("+   2.maths            +\n");
    printf("+   3.english          +\n");
    printf("+   4.read             +\n");
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
    }else if(a==4){
        read();
    }else{
        printf("sorry,enter angin!\n");
        system("pause");
        main();
    }
}
int chinese()
{
    int a,b;
    system("cls");
    FILE * fp;
    if(fp=fopen("chinese.txt","a")==NULL)
    {
        printf("sorry,don't find chinese.txt\n");
    }
    printf("----------Chinese----------\n");
    for(int i=1;i<=num;i++)
    {
        printf("%s:",student_name);
        scanf("%d",&student_chinese[i]);
        printf("\n");
        if(student_chinese[i]==' ')
        {
            student_chinese[i]=0;
        }
    }
    printf("-----------ENTER END------------");
    fputs(student_chinese,fp);
        fputs("\n",fp);
        fclose(fp);
        printf("-----------SAVE OK--------------");
        system("pause");
        system("cls");
        main();
}
int maths()
{

}
int english()
{

}
int read()
{

}