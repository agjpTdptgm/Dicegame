#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
srand(time(NULL));  

int n1 = rand() % 6 +1;
int n2 = rand() % 6 +1;
int i=0;
printf("Rolling dice...");
printf("Die %d: %d",++i,n1);
printf("Die %d: %d",++i,n2);
printf("Total value: %d",n1+n2);

char name[10];
prinf("Waht is your name?\n>");
scanf("%s",name);
printf("Hellow, %s",name);
return 0;
}
