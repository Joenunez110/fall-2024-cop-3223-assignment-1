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

    printf("Please Enter the first point as an ordered pair i.e 3,2: ");
    scanf("%lf,%lf", &x1, &y1);

    printf("Please enter the second point as an ordered pair i.e 3,2: ");
    scanf("%lf,%lf", &x2,&y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("The distance between these two points is: %.2lf", distance);
    return 0;
    
}

//Will calculate the perimeter of a circle
double calculatePerimeter(___){
    double x1, x2, y1, y2;
    double perimeter = 0;

    printf("Please Enter the center point as an ordered pair i.e 3,2: ");
    scanf("%lf,%lf", &x1, &y1);

    printf("Please enter the second point as an ordered pair i.e 3,2: ");
    scanf("%lf,%lf", &x2,&y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double radius = distance;
    perimeter = 2 * pi * radius;
   
    printf("The perimeter/circumfrence of your circle is: %.2lf", perimeter);

    return 0;
}

//Will calculate the Area of a circle
double calculateArea(___){
    double x1, x2, y1, y2;

    printf("Please Enter the center point as an ordered pair i.e 3,2: ");
    scanf("%lf,%lf", &x1, &y1);

    printf("Please enter the second point as an ordered pair i.e 3,2: ");
    scanf("%lf,%lf", &x2,&y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double radius = distance;
    double area = pi * pow(radius, 2);

    printf("\nThe area of your circle is: %.2lf", area);

    return 0;
}

//Will calculate the Width (Diameter) of the circle
double calculateWidth(___){
    double x1, x2, y1, y2;

    printf("Please Enter the center point as an ordered pair i.e 3,2: ");
    scanf("%lf,%lf", &x1, &y1);

    printf("Please enter the second point as an ordered pair i.e 3,2: ");
    scanf("%lf,%lf", &x2,&y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double radius = distance;
    radius = radius * 2;
    printf("The width of your circle is: %.2lf", radius);
    return 0;
}

//Will measure the height of a circle
double calculateHeight(___){
    double x1, x2, y1, y2;

     printf("Please Enter the center point as an ordered pair i.e 3,2: ");
    scanf("%lf,%lf", &x1, &y1);

    printf("Please enter the second point as an ordered pair i.e 3,2: ");
    scanf("%lf,%lf", &x2,&y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double radius = distance;
    radius = radius * 2;
    printf("The height of your circle is: %.2lf", radius);
    return 0;
}

//This function will gather all required data for the calculations
int askUserForInput(___){
    int choice = 0;
    printf("What would you like to do?\n1. Calculate distance\n2. Calculate perimeter\n3. Calculate area\n4. Calculate Width\n5. Caluclate height\n");
    scanf("%d", &choice);
    while (choice > 5 || choice < 1){
        printf("\nInvalid input. Please try again.\n\n");
        printf("What would you like to do?\n1. Calculate distance\n2. Calculate perimeter\n3. Calculate area\n4. Calculate Width\n5. Caluclate height\n");
        scanf("%d", &choice);
    }
    switch (choice){
        case 1:
            calculateDistance(choice);
            break;
        case 2:
            calculatePerimeter(choice);
            break;
        case 3:
            calculateArea(choice);
            break;
        case 4:
            calculateWidth(choice);
            break;
        case 5:
            calculateHeight(choice);
            break;
    }
    return 0;
}

int main(int argc, char **argv){
    int choice = 0;
    askUserForInput(choice);
    return 0;
}