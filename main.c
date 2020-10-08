#include <stdio.h>
#include <math.h>
int main(void) {
  float a, b, c, d;
  int num;
  printf("Enter Number : ");
  scanf("%d",&num);
  if(num>=0 && num<=9999){
    a=num/1000;
    b=(num%1000)/100;
    c=(num%100)/10;
    d=num%10;
    printf("%.0f^4 + %.0f^4 + %.0f^4 + %.0f^4 = %.0f+%.0f+%.0f+%.0f = %.0f",a,b,c,d,pow(a,4),pow(b,4),pow(c,4),pow(d,4),pow(a,4)+pow(b,4)+pow(c,4)+pow(d,4));
  }
}
