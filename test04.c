#include <stdio.h>
#include <math.h>
#include <string.h>

int main()

{
float i;
for ( i=0 ; i <= 10 ; i++)

{
	char seq[ 1000 ];
	int length;

	scanf("%s", seq );
	length = strlen( seq );

	printf("the length is %d\n", length );

}
}
