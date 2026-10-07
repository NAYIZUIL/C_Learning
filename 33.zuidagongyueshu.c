//求两个数的最大公约数
//思路一
// #include<stdio.h>
// int main(){
//     int a,b;
//     int min;
//     scanf("%d %d",&a,&b);
//     if(a>b){
//         min=b;
//     }else{
//         min=a;//一定要是左边变量右边赋值不然会生成垃圾值
//     }
//     int ret=0;
//     int i;
//     for(i=1;i<min;i++){
//         if(a%i==0){
//             if(b%i==0){
//             ret=i;
//         }
//         }
//     }
//     printf("%d和%d的最大公约数是%d",a,b,ret);
//     return 0;
// }
//思路二
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int t;
    while(b!=0){
        t=a%b;
        a=b;
        b=t;
        printf("a=%d b=%d t=%d\n",a,b,t);
    }
    printf("最大公约数是%d",a);
    return 0;

}