#include <stdio.h>
#include <string.h>

void max1(int j[3], int lengthArr1) {
	int maxArr = j[0];
	for (int i = 0; i < lengthArr1; ++i) {
		if(j[i] > maxArr) {
		maxArr = j[i];
		}	
	}
	
	printf("%d\n", maxArr);
}

void max2(int *x, int lenghtArr2) {
	int maxArr = x[0];
	for(int i = 0; i < lenghtArr2; ++i) {
		if (x[i] > maxArr) {
			maxArr = x[i];
		}
	}
	printf("%d\n", maxArr);
}

void max3(char *sillytext[], int lengthArr3) {
	char *maxStr = sillytext[0];
	for (int i = 0; i < lengthArr3; ++i) {
		if(strcmp(sillytext[i], maxStr) > 0) {
			maxStr = sillytext[i];
		}
	}
	printf("Max string: %s", maxStr);
}

int main() {
	
	//first array
    int j[3] = {1, 5, 9};
    int lengthArr1 = sizeof(j) / sizeof(j[0]);
    
    //second array
    int x[5] = {643, 888, 1117, 994, 65};
    int lengthArr2 = sizeof(x) / sizeof(x[0]);
    
    //third array
	char  *sillytext[] = {"Catboy", "pwogwammer", "meow!"};
	int lengthArr3 = sizeof(sillytext) / sizeof(sillytext[0]);
	
	max1(j, lengthArr1);
    max2(x, lengthArr2);
    max3(sillytext, lengthArr3);
    return 0;
}