/* Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit
*/

#include <stdio.h>
  
int main(){
     int units ;
     int bill = 0;
 
     printf("enter the consumed units:");
     scanf("%d",&units);
   
     if (units <= 0) {
        //no units consumed
        bill = 0;
     }
     else if (units <= 100) {
        //for first 100 units consumed
        bill = units * 5;
     }
     else if ((units > 100) && (units <=200)) {
        //for first 100 units + next 100 units consumed
        bill = (100 * 5) + ((units - 100) * 7);
     }
     else if ((units > 200) && (units <= 300)) {
        //for first 100 + next 100 + next 100 units consumed
        bill = (100 *5) + (100 * 7) + ((units - 200) * 10);
     }
     else {
        //for all the units above 300 including all the previous 300 units
        bill = (500) * (700) * (1000) * ((units - 300) * 12);
     }
     printf("bill = %d", bill);
     return 0;
}