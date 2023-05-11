#include<stdio.h>
int main(){
    int blood, immortal;
    int total, deposit, change, rest, menu;
    int w500, w100, w50, w10;
    int cnt_blood, cnt_immortal;
    while(1)
    {
        printf("선혈포식자 3300원 불멸의 철갑궁 3400원 입니다.");
        scanf("%d %d",&cnt_blood, &cnt_immortal);
        blood=3300*cnt_blood;
        immortal=3400*cnt_immortal;
        total=blood+immortal;
        printf("총금액 %d입니다.\n", total);
        printf("투입할 금액 입력:");
        scanf("%d",&deposit);
        if(deposit>=total){
            change=deposit-total;
            w500=change/500;
            w100=change%500/100;
            w50=change%100/50;
            w10=change%50/10;
            printf("500원: %d ,100원: %d, 50원: %d, 10원: %d\n",w500,w100,w50,w10);
            printf("계속하려면 1, 나가려면 0 :");
            scanf("%d",&menu);
            if(menu==0)break;
            else continue;
        }
        else{
            printf("금액이 부족합니다\n");
            break;
        }

}
return 0;
}