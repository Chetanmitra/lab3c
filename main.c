// Author: Chetan Mitra czm5805@psu.edu
// Collaborator: Nick McCuch nmm6025@psu.edu
// Collaborator: Devansh Agarwal dqa5365@psu.edu
// Breakout Room: 6
// Section: 11R


#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>


int sum_n(int );
void print_n(const char*, int);


int main()
{
  int num = atof(readline("Enter an int: "));
  int sum = sum_n(num);
  printf("sum is %d.\n", sum);
  const char* copy = readline("Enter a string: ");
  print_n(copy, num);
}


int sum_n(int n)
{
  if (n<1)
  {
    return n=0;
  }
  else{
       return n + sum_n(n-1); 
  }
}


void print_n(const char *s, int n)
{
  if (n>=1)
  {
    printf("%s\n",s); 
    print_n(s,n-1);
  }
}