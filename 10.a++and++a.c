#include<stdio.h>
int main(){
    int a=10;
    printf("a++=%d\n",a++);//所谓a++输出的是a+1之前的值
    printf("a=%d\n",a);//而此时产生的副作用是输出的a已经变成a+1以后的值先用后加
    printf("++a=%d\n",++a);//而++a输出的是a+1之后的值
    printf("a=%d\n",a);//同时所产生的副作用是a也变成a+1之后的值先加后用
    return 0;
}