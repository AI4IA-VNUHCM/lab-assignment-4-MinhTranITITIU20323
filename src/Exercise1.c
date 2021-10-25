/*
1.	Write a program to construct the Pascal triangle with the given integer n.
Ex:
______________________________________
| Input: 3                           |
| Output:                            |
| 1                                  |
| 1 1                                |
| 1 2 1                              |
| 1 3 3 1                            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int binomialCoefficients(int i, int j) {
	if (i == 0 || j == i)
   		return 1;
   	return binomialCoefficients(i - 1, j - 1) + binomialCoefficients(i - 1, j);

}

void Ex1(int n){
	//Your codes here
	int i,j;
    for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			int temp=binomialCoefficients(i,j);
			printf(" %d",temp);
		}
		printf("\n");
	}
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase);
	return 0;
}
