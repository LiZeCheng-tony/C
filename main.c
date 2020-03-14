#include<stdio.h>
#define num 59
#define MAX_LINE 1000000
int student_chinese[num];
int student_maths[num];
int student_english[num];
int student_name[MAX_LINE];
int name()
{
 FILE *fp;            /*文件指针*/
 int len;             /*行字符个数*/
 if((fp = fopen("name.txt","r")) == NULL)
 {
 perror("fail to read");
 exit (1) ;
 }
 while(fgets(student_name,MAX_LINE,fp) != NULL)
 {
 printf("%d \n",student_name);
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