#include<stdio.h>
void main(){
    int pin,pin1=5555,choise;
    float amount,balance=20000,new_amount;
    printf("\t\t\twellcome to own bank of india\n");
    printf("enter your atm pin:");
    scanf("%d",&pin);
    if(pin==pin1){
        printf("\n1:check balance\n2:deposite amount\n3:withdraw\n");
        printf("enter your choise:\n");
        scanf("%d",&choise);
         if(choise==1){
            printf("\nyour balance :%.1f",balance);
        }
        else if(choise==2){
            printf("enter your deposite amount:");
            scanf("%.0f",&amount);
            if(amount<=50000){
                amount+=balance;
            printf("new balance amount:%.0f",amount);
            }
            else{
                printf("maximum limit 50000");
            }

        }
    }
    else
        printf("enter your valid atm pin:");
    }
}
