// Write a program to calculate library fine based on late days as follows: 
// First 5 days late: ₹2/day 
// Next 5 days late: ₹4/day 
// Next 20 days days late: ₹6/day 
// More than 30 days: Membership Cancelled.
#include <stdio.h>
int main () {
    int days, fine;
    printf("Enter days: ");
    scanf("%d", &days);
    if (days>=1 && days<=5)
        printf("Fine: %d", days*2);
    else if (days>=6 && days<=10)
        printf("Fine: %d", (5*2) + (days-5)*4);
    else if (days>=11 && days<=30)
        printf("Fine: %d", (5*2) + (5*4) + (days-10)*6);
    else if (days>=31)
        printf("Membership Cancelled");
    else
        printf("Invalid number of days");
    return 0;
}
