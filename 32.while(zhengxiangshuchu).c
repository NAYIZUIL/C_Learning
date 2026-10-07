//正向输出一个数
//思路一先倒着输出再倒着输出倒着的数
// #include<stdio.h>
// int main(){
//     int x;
//     int d;
// printf("请输入一个数:");
//     scanf("%d",&x);
//    int t=0;
//     do{
//         d=x%10;
//         t=t*10+d;
//         x/=10;
//     }while(x>0);
//     x=t;
//     do{
//         d=x%10;
//         printf("%d",d);
//         if(x>9){
//             printf(" ");
//         }
//         x/=10;
//     }while(x>0);
//     return 0;

// }
//思路一如果末尾有0的话是无法输出的，所以有思路二
#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int mask=1;
    int t=x;
    while(t>9){
        t/=10;
        mask*=10;
    }
    printf("mask是%d\n",mask);
    do{
        int d=x/mask;
        printf("%d",d);
        if(mask>9){//如果设为x>0时输出为0的数就不会有空格
            printf(" ");
        }
        x%=mask;
        mask/=10;
        //printf("%d %d",x,mask);
    }while(mask>0);
    return 0;
}