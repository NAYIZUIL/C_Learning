#include<stdio.h>
int main(){
    int x;
    printf("请输入一个数：");
    scanf("%d",&x);
    int isPrime=1;
    int i;
    for(i=2;i<x;i++){
        if(x%i==0){
            isPrime=0;
            break;
        }
        
        }if(isPrime==0){
            printf("%d不是素数",x);}
            else{
            printf("%d是素数",x);}
    
    return 0;
}