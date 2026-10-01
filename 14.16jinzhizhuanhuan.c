#include<stdio.h>
int main(){
    int x=0;
    scanf("%d",&x);
    printf("%x\n",x);//输出函数用%x表示就会变成输入的数的十六进制
    printf("%#x\n",x);//输出函数用%x表示就会变成输入的数的带前缀0x的十六进制
    printf("%o\n",x);//输出函数用%o表示就会变成输入的数的八进制
    return 0;
}