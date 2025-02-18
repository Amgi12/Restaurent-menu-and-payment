//
// Created by Amgith on 17-02-2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    char item[20];
    int price;
}menui;
void payment();
int menu(int menu_number,menui name[], int *total) {
    while(1) {
        printf("\n\nMenu:\n");
        int food_choice,i;
        for(i=0;i<menu_number;i++) {
            printf("%d . %s\n",i+1, name[i].item);
        }
        printf("%d . Total\n",menu_number+1);
        printf("Enter your Food choice:");
        scanf("%d",&food_choice);
        if (food_choice>=1&&food_choice<=menu_number){
            *total +=name[food_choice-1].price;
            printf("item:%s\nPrice:%d\n",name[food_choice-1].item,name[food_choice-1].price);
        }
        else if (food_choice==menu_number+1){
            printf("Total Amount:%d\n",*total);
            payment();
            printf("Thank you for purchase\n");
            exit(0);
        }
        else {
            printf("Invalid Choice,Try again!\n");
            exit(0);
        }
    }
}
int main() {
    int choice,total=0;
    char *restaurent[] ={"abhi_foods","prem_foods","manik_foods"};
    menui abhi_foods[] = {
        {"Burger", 599},
        {"Pizza", 899},
        {"Pasta", 749},
        {"Salad", 499},
        {"Soda", 199}
    };
    menui prem_foods[] = {
        {"Idli", 199},
        {"Vada", 99},
        {"Dosa", 249},
        {"Poori", 199},
        {"Tea", 99}
    };
    menui manik_foods[] = {
        {"Tea", 99},
        {"Coffee", 99},
        {"Puffs", 349},
        {"Biscuit", 299},
        {"Vada pav", 259}
    };
    printf("Restaurents:\n");
    for(int i=0;i<(sizeof(restaurent)/sizeof(restaurent[0]));i++) {
        printf("%d . %s\n",i+1, restaurent[i]);
    }
    printf("Enter your choice:");
    scanf("%d",&choice);

    int abhi_menu=sizeof(abhi_foods)/sizeof(abhi_foods[0]) ;
    int prem_menu=sizeof(prem_foods)/sizeof(prem_foods[0]) ;
    int manik_menu=sizeof(manik_foods)/sizeof(manik_foods[0]);
    switch(choice) {
        case 1:
            menu(abhi_menu,abhi_foods,&total);
        break;
        case 2:
            menu(prem_menu,prem_foods,&total);
        break;
        case 3:
            menu(manik_menu,manik_foods,&total);
        break;
    }
}






