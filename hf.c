#include<stdio.h>
void main()
{
    int A;  // Setting a variable to take password as input

    printf("Enter the password:");    // Prompt to enter password
    scanf("%d",&A);     // Taking password input


    if(A==000) // Checking if the entered password matches the correct one
    {
        printf("A Diary Management System\n");  //printing the app name
        printf("You have logged in successfully\n");  // printing the logging status
      int X;
      printf("Enter your choice to procced");
      scanf("%d",&X);
      switch (X);
 case 1:
    printf("Add an new entry");
    break;
 case 2:
    printf("Edit an existing entry");
      break;
 case 3:
    printf("Delete an entry");
     break;
 case 4:
    printf("Search for an entry");
     break;
 default:
    printf("Exit");
    }
    else
    {
        printf("You have entered the wrong password!\n");  // Showing that the password is not correct
    }
}

