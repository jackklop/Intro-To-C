#include <stdlib.h>
#include <stdio.h>

void sort(int[], int);

int main(int argc, char *argv[]){

	FILE *fp;
	char* filename;
	filename = argv[1];

	fp = fopen(filename,"r");

	int length;
	//reads first number as the length of array
	fscanf(fp, "%d\n", &length);

	//reads length # of times
	int ogArr[length];
	int i;
	for (i = 0; i < length; i++){
		fscanf(fp, "%d\t", &ogArr[i]);
	}	

	//end for loop
	sort(ogArr,length);
	//odd, prints forward
	for (i = 0; i < length; i++){
		if ((ogArr[i] % 2 == 1 || ogArr[i] % 2 == -1) && ogArr[i] != 0){
		printf("%d\t", ogArr[i]);
		}

	}		
	//even, prints backwards
	for (i = length-1; i >=  0; i--){
		if (ogArr[i] % 2 == 0){
		printf("%d\t", ogArr[i]);
		}
	}
	return 0;
}

void sort(int arr[], int length){
	int n = length;
	int i;
	for (i=0; i<n; i++){
		int val = arr[i];
		int j = i-1;
		while (j>=0 && arr[j] > val){
			arr[j+1] = arr[j];
			j = j-1;
			}
		arr[j+1] = val;
}
}
 
       





