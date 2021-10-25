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
int factorial(int n){
    int i, result = 1;

    for(i=1; i<=n; i++){
		result = result*i;
	}
    return (result);
}

void Ex1(int n){
	//Your codes here
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			printf("%d ",factorial(i)/(factorial(j)*factorial(i-j)));
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
