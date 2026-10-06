//用for循环求一个数的阶乘，同时用while求一遍
//for(初始动作;循环条件;循环每轮要做的)分号不能省略
#include<stdio.h>
int main(){
    int n;
    int fact=1;
    printf("请输入一个数字:");
    scanf("%d",&n);
   // int i=2;
   //while(i<=n){
   //    fact*=i;
    //   i++;
   // }
   
   //int i=2;
   //for(;i<=n;i++){
   // fact*=i;
   //}
    //int i=n;
    for(;n>1;n--){
        fact*=n;
    }
    printf("这个数的阶乘是%d",fact);
    return 0;
}