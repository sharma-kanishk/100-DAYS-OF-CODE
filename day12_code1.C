/* Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.
*/

#include <stdio.h>

int main(){
      int latedays ;
      int fine = 0;
      printf("enter the number of days late:");
      scanf("%d", &latedays);

      if (latedays < 0) {
          printf("Invalid number of days");
      }
     
      else if (latedays > 30) {
          printf("Membership cancelled");
      }
      else {
           if (latedays <= 5) {
              //fine for first 5 days 
              fine = latedays * 2 ;
            }
           else if (latedays <= 10) {
              //fine for the first 5 days + next late days
              fine = (5 * 2) + ((latedays - 5) * 4);
           }
           else {
              //fine for first 5 days + next 5 days + remaining days (up to 30)
              fine = (5 * 2) + (5 * 4) + ((latedays - 10) * 6);
           }
           printf("fine = %d", fine);
      }
      return 0;
}
