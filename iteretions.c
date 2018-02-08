#include <stdio.h>
#define N 100

// 3x+1 problem.
// Calculation of steps - iterations needed to reach 1.

int main(int argc,char *argv[])
{
	
	int seed;
	int times = 0;
	int tmp;

	for ( seed = 2; seed < N; seed++) {
	
		times = 0;
		tmp = seed;

		while ( tmp != 1 ) {
		
			if (tmp % 2 )
				tmp = 3*tmp + 1;
			else
				tmp /= 2;
	
			times++;
		}
		
		printf("input:%5d\tsteps=%4d\n", seed, times);	
	}

	return 0;

}
