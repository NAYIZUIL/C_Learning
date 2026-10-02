//使用while循环求一组数的平均数，可以设置任意节点如-1来停止循环
#include<stdio.h>
int main(){
    int number;
    int sum=0;//总和
    int count=0;//数字的数量
    printf("请输入数字:\n");
    scanf("%d",&number);
    while(number!=-1){
        sum+=number;
        count++;
        printf("请输入数字：\n");
        scanf("%d",&number);

    }
    printf("平均数为%f",1.0*sum/count);
    return 0;
}