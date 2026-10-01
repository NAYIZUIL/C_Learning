#include<stdio.h>
int main(){
    int a=5;
    int b=9;
    int c;
    c=a;//赋值语句不需要再定义所以不需要int
    a=b;
    b=c;
    printf("a=%d,b=%d\n",a,b);
    return 0;

}