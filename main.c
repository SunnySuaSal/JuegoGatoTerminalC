#include<stdio.h>
int main(){
	int tablero[3][3];
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			tablero[i][j]=0;
		}
	}
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("%d ", tablero[i][j]);
		}
		printf("\n");
	}


	return 0;
}
