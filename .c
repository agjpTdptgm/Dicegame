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

if(n1+n2>=8)
printf("You won\n");
else
("You lost\n");

return 0;
}
