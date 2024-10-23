//School lab activity SET B if-else
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<time.h>
 void Menu() {
  printf("\n*======SET B PROBLEMS======*\n");
  printf("|1. Problem 1              |\n");
  printf("|2. Problem 2              |\n");
  printf("|3. Problem 3              |\n");
  printf("|4. Exit                   |\n");
  printf("|==========================|\n");
  printf("What problem you want:  ");
}

 void prob1() {
  char let;
  int num;
  clrscr();

  printf("Enter a character: ");
  scanf(" %c",&let);

  printf("Enter a number: ");
  scanf("%d",&num);

  //If you ask for sample output 2 which is ASCII Wins its wrong. See the ASCII Table for answer ^_^
  if(let > num) {
    printf("ASCII Wins.\n");
} else {
    printf("Number Wins.\n");
}
  getch();
  return;
}

//Problem 2.
 void prob2() {
  int num;
  clrscr();

  printf("Enter a number: ");
  scanf("%d",&num);

  if(num % 2 == 0) {
    printf("The number is even.\n");
} else {
    printf("The number is odd.\n");
}
  getch();
}

//Problem 3.
 void prob3() {
  int num;
  clrscr();

  printf("Enter a number: ");
  scanf("%d",&num);

  if(num % 3 == 0 && num % 5 == 0) {
   printf("The number is divisible by both 3 and 5.\n");
} else {
   printf("The number is not divisible by both 3 and 5.\n");
}
  getch();
}
 //Function to clear the input buffer
 //This function prevents an error to occur when user input a character or string. It only accepts integer.
 void clrIB() { //clearInputBuffer = clrIB
  char ch;
  while ((ch == getchar()) != '\n' && ch != EOF); //Clear the input buffer
}

 int main() {
  int option;
  clrscr();

   do{
     Menu();//Calling to show the menu
    if(scanf("%d",&option) != 1) { //Checked if a valid integer was entered.
       clrscr();
       printf("Error: Invalid Input! Letters, Strings, & Special Characters Are Not Accepted.");
       clrIB();//clrIB short for clearInputBuffer. It clears the input buffer in case of invalid input
       continue;//Skip to the next iteration of the loop.
}

     switch(option) {
      case 1:
       prob1();
       break;
      case 2:
       prob2();
       break;
      case 3:
       prob3();
       break;
      case 4:// ^_^ Just having fun with sleep function
       printf("Thank You! Goodbye.");
       sleep(1);
       clrscr();
       printf("Program Exiting...");
       sleep(1);
       clrscr();
       printf("Program Exiting...3");
       sleep(1);
       clrscr();
       printf("Program Exiting...2");
       sleep(1);
       clrscr();
       printf("Program Exiting...1");
       sleep(1);
       clrscr();
       break;
      default:
       clrscr();
       printf("Error: Invalid Option! Please Choose Between (1, 2, 3, & 4).");
   }
} while(option != 4);

  return 0;
}