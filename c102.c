#include<stdio.h>
int main(){
    int blood, immortal;
    int total, deposit, change, rest, menu;
    int w500, w100, w50, w10;
    int cnt_blood, cnt_immortal;
    while(1)
    {
        printf("���������� 3300�� �Ҹ��� ö���� 3400�� �Դϴ�.");
        scanf("%d %d",&cnt_blood, &cnt_immortal);
        blood=3300*cnt_blood;
        immortal=3400*cnt_immortal;
        total=blood+immortal;
        printf("�ѱݾ� %d�Դϴ�.\n", total);
        printf("������ �ݾ� �Է�:");
        scanf("%d",&deposit);
        if(deposit>=total){
            change=deposit-total;
            w500=change/500;
            w100=change%500/100;
            w50=change%100/50;
            w10=change%50/10;
            printf("500��: %d ,100��: %d, 50��: %d, 10��: %d\n",w500,w100,w50,w10);
            printf("����Ϸ��� 1, �������� 0 :");
            scanf("%d",&menu);
            if(menu==0)break;
            else continue;
        }
        else{
            printf("�ݾ��� �����մϴ�\n");
            break;
        }

}
return 0;
}