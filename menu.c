//
// Created by Amgith on 17-02-2025.
//

#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char item[20];
    int price;
}menui;
int main() {
    menui menu[] = {
        {"Burger", 599},
        {"Pizza", 899},
        {"Pasta", 749},
        {"Salad", 499},
        {"Soda", 199}
    };
    printf("Menu:\n");
    int menu_list=sizeof(menu)/sizeof(menu[0]) ;
    int choice=0;
    for(int i=0;i<=menu_list;i++) {
        printf("Restaurent Menu:\n");
        printf("1. Burger\n2.Pizza\n3.Pasta\n4.Salad\n5.Soda\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        if(choice>=1&&choice<=menu_list) {
            printf("item:%s\nPrice:%d\n",menu[choice-1].item,menu[choice-1].price);
        }
        else {
            printf("Invalid choice\n");
        }
    }

}




