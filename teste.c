#include <stdio.h>

int main() {
	int vetor1[]={1,2,3,4,5,6,7,8,9,10};
	int vetor2[10];
	int vetor3[10] = {1,2,3,4,5,6,7,8,9,10};
	int i;
	for(i = 0;i<10;++i){
		printf("%d ",vetor1[i]);
		
	}
	printf("\n");
	for(i = 0;i<10;++i){
		printf("%d ",vetor2[i]);
		
	}
	printf("\n");
	for(i = 0;i<10;++i){
		printf("%d ",vetor3[i]);
		
	}
	printf("\n");
	system("pause");
	return 0;
}
