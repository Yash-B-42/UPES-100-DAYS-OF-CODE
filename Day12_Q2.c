// Write a program to calculate electricity bill based on units consumed with these rates: 
// First 100 units at ₹5/unit 
// Next 100 units at ₹7/unit 
// Next 100 units at ₹10/unit 
// Above at ₹12/unit
#include <stdio.h>
int main () {
    int units;
    printf("Enter units: ");
    scanf("%d", &units);
    if (units>=1 && units<=100)
        printf("Bill: %d", units*5);
    else if (units>=101 && units<=200)
        printf("Bill: %d", (100*5) + (units-100)*7);
    else if (units>=201 && units<=300)
        printf("Bill: %d", (100*5) + (100*7) + (units-200)*10);
    else if (units>=301)
        printf("Bill: %d", (100*5) + (100*7) + (100*10) + (units-300)*12);
    else
        printf("Invalid amount of units");
    return 0;
}
