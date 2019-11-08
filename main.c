#include<stdio.h>
///this is how you include a file from the same project.
///the h file contains all the functions you want to include
#include "func.h"

int main() {
     int x = 2;

     ///using the function we created on x=2 will turn it to x=4... lets check
     x = multiplication2(x);

     printf("number is: %d\n", x);
}
