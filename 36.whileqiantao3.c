//给定正整数a,考虑从a开始的连续4个数字，输出由它们组成的无重复集合，要求顺序从小到大
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int i,j,k;
    int cnt=0;
    i=a;//不要忘记给ijk赋初始值，不然就会陷入死循环
    while(i<=a+3){
        j=a;
        while(j<=a+3){
            k=a;
            while(k<=a+3){
                if(i!=j){
                    if(i!=k){
                        if(j!=k){
                   printf("%d%d%d ",i,j,k);
                   cnt++;
                   if(cnt==6){
                    printf("\n");
                    cnt=0;
                   }

                        }
                    }
                }
               
                k++;
            }
        
            j++;
        }
        i++;
    }return 0;
    }
    
