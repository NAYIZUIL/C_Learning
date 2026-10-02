//让程序随机生成一个数用户来猜，使用while循环
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    int number=rand()%100+1;//取余100后生成的随机数的区间是1~99加1就会变成1~100
    int count=0;//定义所猜次数
    int a=0;
    printf("我已经想好了这个1~100的数\n");
    do{
        printf("请猜这个数是什么：");
        scanf("%d",&a);
        count++;
        if(a>number){
            printf("你猜大了\n");
        }else if(a<number){
            printf("你猜小了\n");
        }
    }while(a!=number);
  printf("恭喜你猜对了，你一共猜了%d次\n",count);
  return 0;
}