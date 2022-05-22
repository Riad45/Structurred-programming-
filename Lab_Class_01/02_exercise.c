#include <stdio.h>
int main()
{
    float km, m, ft, inches, cm;
    printf("Enter distance from Mirpur to Ashulia:  \n");
    scanf("%f", &km);
    m = km * 1000;           // 1kilometer=1000meters
    ft = km * 3280.8399;     // 1kilometer=3280.8399 feets
    inches = km * 39370.078; // 1kilometer=39370.078 inches
    cm = km * 100000;        // 1kilometer=100000 centimeter

    printf("Distance in meter from Mirpur to Ashulia in meter: %.2f\n", m);
    printf("Distance in feet from Mirpur to Ashulia in feet: %.2f\n", ft);
    printf("Distance in inches from Mirpur to Ashulia in inches: %.2f\n", inches);
    printf("Distance in centimeter from Mirpur to Ashulia in centimeter: %.2f\n", cm);

    return 0;
}