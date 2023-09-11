#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n=get_int("Height: ");
    }
    while (n <= 0 || n >= 9);

  for(int i=1 ; i<=n ; i++)
  {
    for(int k=1 ; k<=(n-i) ; k++)
    {
       printf(" ");
    }
     for(int j=1 ; j<=i ; j++)
     {
        printf("#");
     }
    printf("\n");

  }
}