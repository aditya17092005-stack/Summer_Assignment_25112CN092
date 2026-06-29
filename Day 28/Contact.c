#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include "gotoxy.h"

// Define Constant Variables
#define ESC 27

// Declare functions
void mainMenu();
void viewItems();
void addItems();
void updateItems();
void deleteItems();

// C main function
int main(){
    mainMenu();
    return 0;
}

//Start function definitions

//Display user menu
void mainMenu(){


    char choice;

    system("cls");

    gotoxy(35,6);
    printf("----Welcome to Contact Management System----");
    gotoxy(35,8);
    printf("Please select the any option v, a, u, d, e or ESC");
    gotoxy(35,10);
    printf("V) View All Contact");
    gotoxy(35,12);
    printf("A) Add Contact");
    gotoxy(35,14);
    printf("U) Update Contact");
    gotoxy(35,16);
    printf("D) Delete Contact");
    gotoxy(35,18);
    printf("E) Exit application");
    gotoxy(35,20);
    printf("Please enter ESC to exit application");

    choice=tolower(getch());

    switch(choice){
        case 'v':
            viewItems();
            break;
        case 'a':
            addItems();
            break;
        case 'u':
            updateItems();
            break;
        case 'd':
            deleteItems();
            break;
        case 'e':
            exit(0);
        case ESC:
            exit(0);
        default:
            gotoxy(35,30);
            printf("Please enter options V, A, U, D, E or ESC");
            if(getch())
                mainMenu();
    }
}

//Display contacts only 15 items
void viewItems(){

    system("cls");
    gotoxy(35,6);
    printf("----Welcome to Contact Management System----");
    gotoxy(35,8);
    printf("View Contact function selected");

    gotoxy(35,27);
    printf("Please enter ESC key to go back.");
    if(getch()==ESC){
        mainMenu();
    } else {
        viewItems();
    }

}

//Add contacts
void addItems(){

    system("cls");
    gotoxy(35,6);
    printf("----Welcome to Contact Management System----");
    gotoxy(35,8);
    printf("Add Contact function selected");

    gotoxy(35,27);
    printf("Please press any key to continue or enter ESC key to go back.");
    if(getch()==ESC){
        mainMenu();
    } else {
        addItems();
    }
}

//Update contact details
void updateItems(){

    system("cls");
    gotoxy(35,6);
    printf("----Welcome to Contact Management System----");
    gotoxy(35,8);
    printf("Update Contact function selected");

    gotoxy(35,27);
    printf("Please enter any key to continue or enter ESC key to go back.");
    if(getch()==ESC){
        mainMenu();
    } else {
        updateItems();
    }
}

//Delete contacts details
void deleteItems(){

    system("cls");
    gotoxy(35,6);
    printf("----Welcome to Contact Management System----");
    gotoxy(35,8);
    printf("Delete Contact function selected");

    gotoxy(35,27);
    printf("Please enter any key to continue or enter ESC key to go back.");

    if(getch()==ESC){
        mainMenu();
    } else {
        deleteItems();
    }
}