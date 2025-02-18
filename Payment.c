//
// Created by Amgith on 17-02-2025.
//
#include <stdio.h>
#include <stdlib.h>
void main() {
    while (1) {
        int card_no,bank_choice;
        char ID[20];
        printf("Payment gateway\n");
        printf("1.Credit/Debit card\n2.UPI\n3.Net Banking\n");
        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:printf("Enter 16 digit card number:");
                    scanf("%d",&card_no);
                    printf("Payment Successfull!");
                    break;
            case 2:printf("Enter you UPI ID(user@upi):");
                    scanf("%s",ID);
                    printf("Payment Successfull!");
                    break;
            case 3:printf("Bank choice\n");
                    printf("1.SBI\n2.HDFC\n");
                    printf("Enter your choice: ");
                    scanf("%d", &bank_choice);
                    switch (bank_choice) {
                        case 1:printf("Payment Successfull!");
                                break;
                        case 2:printf("Payment Successfull!");
                                break;
                        default:printf("Invalid choice");
                                break;
                    }
                    break;
            default:printf("Invalid Payment Method.Please try again\n");
            return;;
        }
    }
}
