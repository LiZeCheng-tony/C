#include<stdio.h>
int main()
{
    int a;
    system("cls");
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