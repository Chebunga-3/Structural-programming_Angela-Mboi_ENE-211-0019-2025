#include <stdio.h>
#include <stdlib.h>

int main()
{
    double surfacearea;
    const double pi= 3.14;
    double r;

    printf("Enter the radius of the sphere:\n ");
    scanf("%lf",&r);
    surfacearea = pi*r*r*4;

    printf("The surface area of the sphere is %lf",surfacearea);
    return 0;

}
