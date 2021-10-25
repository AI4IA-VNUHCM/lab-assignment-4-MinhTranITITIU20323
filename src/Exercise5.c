/*
5.	Receive an array of m x n with all distinguished elements.
Find the minimum element of each row then find the maximum
number from those.
Ex:
___________________________________________________________________________________
| Input: 5 4 10 21 22 54 64 53 86 72 68 99 30 11 12 23 69 15 16 77 98 19 |
| The converted 2D array will be like this:                                        |
| 10 21 22 54                                                                      |
| 64 53 86 72                                                                      |
| 68 99 30 11                                                                      |
| 12 23 69 15                                                                      |
| 16 77 98 19                                                                      |
| Output:                                                                          |
| 53                                                                               |
|__________________________________________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

void Array2Dconverter(int arr[], int a[SIZE][SIZE], int m, int n)
{
	int row, column;
	int counter = 0;
	//Convert 1D array to 2D array
	for (row = 0; row <= (m - 1); row ++){
		for (column = 0; column <= (n - 1); column ++){
			a[row][column] = arr[counter];
			counter++;
		}
	}
}
void Find(int arr[SIZE][SIZE],int m, int n,int temp[SIZE]){
	int count=0;
	for (int i = 0; i < m; i++) {
		int min=arr[i][0];
		for (int j = 1; j <= n; j++) {
			if(arr[i][j]<min){
				min=arr[i][j];
			}
			if(j==n-1){
				temp[count]=min;
				count++;
			}
		}
	}
	int max=temp[0];
	for(int i=0;i<count;i++){
		if(temp[i]>max){
			max=temp[i];
		}
	}
	printf("%d ", max);
}


void Ex5(int arr[], int m, int n){
	int a[SIZE][SIZE],temp[SIZE];
	Array2Dconverter(arr,a,m,n);
	//Your codes here
	Find(a,m,n,temp);

}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int row = atoi(argv[1]);
	int col = atoi(argv[2]);
	argc-=3;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+3]);
	}

	Ex5(testcase, row, col);
	
	return 0;
}
