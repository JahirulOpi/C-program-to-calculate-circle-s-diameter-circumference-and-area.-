#include <stdio.h>

int main()
{
    float radius; //defining variable radius
    float const PI = 3.14159; //constant PI value
    printf("Enter the radius of the circle: "); //prints the prompt statement
    scanf("%f", &radius); //takes the radius of the circle
    printf("\nMeasurement of the circle is given below:\n"); //header for the output values
    printf("Diameter: %.2f\n", radius*2); //prints the diameter of the circle
    printf("Circumference: %.2f\n", 2*PI*radius); //prints the circumference of the circle
    printf("Area: %.2f\n", PI*radius*radius); //prints the area of the circle

    return 0;
}

