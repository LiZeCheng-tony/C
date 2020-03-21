#include<stdio.h>
int a;                                                   //人数
char student_name[];                                     //人名
int b;                                                   //科目数
int name(){
    FILE *fp;
    int flag,line=0,count = 0;
    if((fp=fopen("name.txt","r"))==NULL)
    {
        printf("can't find/open name.txt!\n");
        system("pause");
    }
    while(!feof(fp))
    {
    flag = fgetc(fp);
    if(flag == '\n')
      count++;
    }
    file_row = count + 1;                               //加上最后一行
}
int main(){
    system("cls");
    name();
}
