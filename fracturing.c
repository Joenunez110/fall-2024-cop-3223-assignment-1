//********************************************************
// fracturing.c
// Author: Joseph Nunez
// Date: 8/27/2024
// Class: COP 3223, Professor Parra
// Purpose: This program will take measurments taken from the user and 
// output height, distance, perimeter, area, and width
// Input: Some points that would be on a graph
// Output: (to the command line) distance, perimeter, area, height, and width
//********************************************************
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14159

//Will calculate the distance for a circle
double calculateDistance(___){
    double x1, x2, y1, y2;

    printf("Please Enter the first point as an ordered pair i.e 3,2: "); //Gathers first point 
    scanf("%lf,%lf", &x1, &y1);

    printf("Please enter the second point as an ordered pair i.e 3,2: "); //Gathers second point
    scanf("%lf,%lf", &x2,&y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); //Calculates the distance between the two points
    printf("The distance between these two points is: %.2lf", distance); //Prints out the distance between the two points

    char anotherCalculation;
    printf("Would you like to find another calculation? y/n: "); //allows user to do another calculation without restarting the program manually
    scanf(" %c", &anotherCalculation);
    switch(anotherCalculation){
        case 'y':
            askUserForInput(anotherCalculation);
            break;
        case 'Y':
            askUserForInput(anotherCalculation);
            break;
        case 'n':
            printf("Exiting program...\n\nProgram terminated\n\nThank you and have a nice day.\n\n");
            break;
        case 'N':
            printf("Exiting program...\n\nProgram terminated\n\nThank you and have a nice day.\n\n");
            break;
    }
    return 0;
    
}

//Will calculate the perimeter of a circle
double calculatePerimeter(___){
    double x1, x2, y1, y2;
    double perimeter = 0; //Initalizes what we are looking for

    printf("Please Enter the center point as an ordered pair i.e 3,2: ");//Gathers Center point
    scanf("%lf,%lf", &x1, &y1);

    printf("Please enter the second point as an ordered pair i.e 3,2: ");//Gathers second point
    scanf("%lf,%lf", &x2,&y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); //Calculate the radius
    double radius = distance; //Reassigns the distance into a radius variable
    perimeter = 2 * pi * radius; //Calculates the perimeter/circumfrence
   
    printf("The perimeter/circumfrence of your circle is: %.2lf", perimeter); //prints out the perimeter/circumfrence

    char anotherCalculation;
    printf("Would you like to find another calculation? y/n: ");
    scanf(" %c", &anotherCalculation);
    switch(anotherCalculation){
        case 'y':
            askUserForInput(anotherCalculation);
            break;
        case 'Y':
            askUserForInput(anotherCalculation);
            break;
        case 'n':
            printf("Exiting program...\n\nProgram terminated\n\nThank you and have a nice day.\n\n");
            break;
        case 'N':
            printf("Exiting program...\n\nProgram terminated\n\nThank you and have a nice day.\n\n");
            break;
    }

    return 0;
}

//Will calculate the Area of a circle
double calculateArea(___){
    double x1, x2, y1, y2;

    printf("Please Enter the center point as an ordered pair i.e 3,2: ");
    scanf("%lf,%lf", &x1, &y1);

    printf("Please enter the second point as an ordered pair i.e 3,2: ");
    scanf("%lf,%lf", &x2,&y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); //Calculate the radius
    double radius = distance; //Reassigns the distance into a radius variable
    double area = pi * pow(radius, 2); //Calculate the area

    printf("\nThe area of your circle is: %.2lf", area);

    char anotherCalculation;
    printf("Would you like to find another calculation? y/n: ");
    scanf(" %c", &anotherCalculation);
    switch(anotherCalculation){
        case 'y':
            askUserForInput(anotherCalculation);
            break;
        case 'Y':
            askUserForInput(anotherCalculation);
            break;
        case 'n':
            printf("Exiting program...\n\nProgram terminated\n\nThank you and have a nice day.\n\n");
            break;
        case 'N':
            printf("Exiting program...\n\nProgram terminated\n\nThank you and have a nice day.\n\n");
            break;
    }

    return 0;
}

//Will calculate the Width (Diameter) of the circle
double calculateWidth(___){
    double x1, x2, y1, y2;

    printf("Please Enter the center point as an ordered pair i.e 3,2: ");
    scanf("%lf,%lf", &x1, &y1);

    printf("Please enter the second point as an ordered pair i.e 3,2: ");
    scanf("%lf,%lf", &x2,&y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));//Calculate the radius
    double radius = distance; //Reassigns the distance into a radius variable
    radius = radius * 2; //Calculates the Width
    printf("The width of your circle is: %.2lf", radius);

    char anotherCalculation;
    printf("Would you like to find another calculation? y/n: ");
    scanf(" %c", &anotherCalculation);
    switch(anotherCalculation){
        case 'y':
            askUserForInput(anotherCalculation);
            break;
        case 'Y':
            askUserForInput(anotherCalculation);
            break;
        case 'n':
            printf("Exiting program...\n\nProgram terminated\n\nThank you and have a nice day.\n\n");
            break;
        case 'N':
            printf("Exiting program...\n\nProgram terminated\n\nThank you and have a nice day.\n\n");
            break;
    }

    return 0;
}

//Will measure the height of a circle
double calculateHeight(___){
    double x1, x2, y1, y2;

     printf("Please Enter the center point as an ordered pair i.e 3,2: ");
    scanf("%lf,%lf", &x1, &y1);

    printf("Please enter the second point as an ordered pair i.e 3,2: ");
    scanf("%lf,%lf", &x2,&y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));//Calculate the radius
    double radius = distance; //Reassigns the distance into a radius variable
    radius = radius * 2; //Calculates the height
    printf("The height of your circle is: %.2lf", radius);

    char anotherCalculation;
    printf("Would you like to find another calculation? y/n: ");
    scanf(" %c", &anotherCalculation);
    switch(anotherCalculation){
        case 'y':
            askUserForInput(anotherCalculation);
            break;
        case 'Y':
            askUserForInput(anotherCalculation);
            break;
        case 'n':
            printf("Exiting program...\n\nProgram terminated\n\nThank you and have a nice day.\n\n");
            break;
        case 'N':
            printf("Exiting program...\n\nProgram terminated\n\nThank you and have a nice day.\n\n");
            break;
    }
    
    return 0;
}

//This function will gather all required data for the calculations
int askUserForInput(___){
    int choice = 0; //Initializes the users choice to zero
    printf("What would you like to do?\n1. Calculate distance\n2. Calculate perimeter\n3. Calculate area\n4. Calculate Width\n5. Caluclate height\n"); //Gathers what calculation the user would like
    scanf("%d", &choice);
    while (choice > 5 || choice < 0){ //Ensures user stays within perameters
        printf("\nInvalid input. Please try again.\n\n");
        printf("What would you like to do?\n1. Calculate distance\n2. Calculate perimeter\n3. Calculate area\n4. Calculate Width\n5. Caluclate height\n");
        scanf("%d", &choice);
    }
    switch (choice){
        case 1:
            calculateDistance(choice); //calls the functions for distance
            break;
        case 2:
            calculatePerimeter(choice); //calls the function for perimeter
            break;
        case 3:
            calculateArea(choice); //calls function to for area
            break;
        case 4:
            calculateWidth(choice); //calls function for width
            break;
        case 5:
            calculateHeight(choice); //calls function for height
            break;
        case 0:
            printf("Exiting program...\n\nProgram terminated\n\nThank you and have a nice day.\n\n"); //allows user to exit program
            break;
    }
    return 0;
}

int main(int argc, char **argv){
    int choice = 0;
    askUserForInput(choice);
    return 0;
}