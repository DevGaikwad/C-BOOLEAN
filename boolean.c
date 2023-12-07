#include<stdio.h>
int main()
{
    int a=20;
    int b =50;
    printf("%d",a<b);
   // printf("%d", 12==15);
    return 0;
}//out=0

#include <stdio.h>

int main() {
  int myAge = 25;
  int votingAge = 18;
  
  printf("%d", myAge >= votingAge); // Returns 1 (true), meaning 25 year olds are allowed to vote!
  return 0;
} //out=1