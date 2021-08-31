#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{int number,guess,nchance=0;
srand(time(0));
number=rand()%100+1;

do {printf("enter your guess between 1 to 100\n");
scanf("%d",&guess);

    if(guess>number)
    {
        printf("guess a little lower\n");
    }
    else if(guess<number)
    {
        printf("guess a little higher\n");

    }
    else{
          printf("you guessed it correctly in %d chances\n",n569chance);}
   nchance++;


}
while(number!=guess );

return 0;

}

