#include<stdio.h>
int main(){
    int a,b,c;
    printf("请输入你要比较的数：");
    scanf("%d %d %d",&a,&b,&c);
    int max=0;
    if(a>b)
      if(a>c)
      max=a;
      else
      max=c;
    else//还是带大括号比较好因为如果上面两个if都没有else配对你们这个else就会配对第二个if，就近原则
      if(b>c)
      max=b;
      else
      max=c;
printf("最大的数是：%d",max);
return 0;          

}