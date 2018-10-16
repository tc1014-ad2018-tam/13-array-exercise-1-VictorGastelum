/*
   This program will ask the user how many times he want that the program will ask him for the numbers,
   then the program will print in the screen sort the numbers in the order in which they were entered and also in reverse order.
   
   Author: Victor Manuel Gastelum Huitzil
   e-mail: A01411985@itesm.mx
   Date: 15/10/18
*/
#include<stdio.h>
#include<stdlib.h>

int main() {
    int k; // This variable will almacenate the times that the user wants to repeat the loop
    int numbers[k]; // This variable will almacenate the size of the array

    // Ask for the numbers and almacenate them in the "k" variable
    printf("How many numbers would you like to input?\n");
    scanf("%d", &k);

    system("cls"); // Clean the screen
    
    // Ask for the numbers and almacenate it
    for (int i=0; i<k ; i++) {
        printf("Insert your numbers one by one:\n");
        scanf("%i", &numbers[i]);
    }

    printf("\nHere is the order in which you entered the numbers: \n");

    // Order the numbers in which they were entered
    for (int i=0; i<k; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    // Order the numbers in reverse order
    printf("Here is the reverse order:\n");
    for(int i=k; i>0 ; i--){
        printf("%d ", numbers[i-1]);
    }
return 0;
}
