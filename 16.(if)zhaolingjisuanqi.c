#include<stdio.h>
int main(){
    int bill=0;
    int price=0;
    printf("请输入您给的票面：");
    scanf("%d",&bill);
    printf("请输入商品价格:");
    scanf("%d",&price);
    if(price<=bill){
        int change=bill-price;
        printf("给您找零%d元\n",change);
}
    else{
        int debt=price-bill;
        printf("不好意思您的零钱不够应该再补%d元\n",debt);
    }
    printf("谢谢惠顾欢迎下次光临！\n");
    return 0;
}