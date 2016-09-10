#include<stdio.h>
#include<cs50.h>
 
int main(void) 
{
  // "Floating" Vars
  // cel represents Celsius 
  // fah represents Fahrenheit
  float cel = GetFloat();
  float fah = ((cel*9)/5)+32;
  
  // Prints Fahrenheit conversion to output
  printf("Fahrenheit: %.2f\n",fah);
}
