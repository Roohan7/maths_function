#include<stdio.h>

int main()
{
       int a, b, add, sub, mul, div;
       printf("Enter a value for a\n");
       scanf("%i", &a);
       printf("Enter a value for b\n");
       scanf("%i", &b);
       
       add = a + b;
       sub = a - b;
       mul = a * b;
       div = a / b;
       
       printf("Addition value of %i + %i is %i\n", a, b, add);
       printf("Subtracted value of %i - %i is %i\n", a, b, sub);
       printf("Multiplied value of %i * %i is %i\n", a, b, mul);
       printf("Divided value of %i / %i is %i\n", a, b, div);
       
       return 0;
}
