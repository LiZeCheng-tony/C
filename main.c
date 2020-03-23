#include<stdio.h>
int a;                                                   //人数
char student_name[];                                     //人名
int b;                                                   //科目数
int z;                                                   //输入（write）函数
int name(){
    FILE *fp;
    int flag,line=0,count = 0;
    char c;                                              //YES/NO
    if((fp=fopen("name.txt","r"))==NULL)
    {
        printf("无法打开\"naem.txt\"\n");
        printf("是否创建\"name.txt?\"\n");
        printf("Y/n:");
        scanf("%c",&c);
        if(c=='Y'|c=='y'|c=="\n"|c=="yes"){
            fp=fopen("name.txt","w");
            int z=1;
            write();
        }else{
            exit(1);
        }
    }
    while(!feof(fp))
    {
    flag = fgetc(fp);
    if(flag == '\n')
      count++;
    }
    line = count + 1;                                   //加上最后一行
    printf("已读取配置文件%d行",line);
}
int write(){
    
}
int main(){
    system("cls");
    name();
}
