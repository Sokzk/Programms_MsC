#include <stdio.h>
#include <math.h>
#include <string.h>

int main()

{
	char seq[1000];
	int length, i;

	while (scanf("%s" , seq) == 1 )
		{
			length = strlen ( seq );
			for ( i=0 ; i < length; i++ )
			{
				 if ( seq[i] == 'D' || seq[i] == 'E' || seq[i] == 'H' || seq[i] == 'N' || seq[i] == 'K' || seq[i] == 'Q' || seq[i] == 'R')
				 {
				 printf(" ");
				 }
				 else if ( seq[i] == 'S' || seq[i] == 'T' || seq[i] == 'G')
				 {
				 printf(".");
				 }
				else if ( seq[i] == 'A' || seq[i] == 'C' || seq[i] == 'M' || seq[i] == 'P')
				 {
				 printf(":");
				 }
				 else if ( seq[i] == 'F' || seq[i] == 'L' || seq[i] == 'I' || seq[i] == 'V' || seq[i] == 'W' || seq[i] == 'Y')
				 {
				  printf("*");
				 }

}
}
}

