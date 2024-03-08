#include<stdio.h>

void inicializaTablero(int tablero[3][3]);
void imprimeTablero(int tablero[3][3]);

int main(){
	int tablero[3][3];
	inicializaTablero(tablero);
	imprimeTablero(tablero);
	return 0;
}

void inicializaTablero(int tablero[3][3]){
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			tablero[i][j]=0;
		}
	}
}

void imprimeTablero(int tablero[3][3]){
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("%d ", tablero[i][j]);
		}
		printf("\n");
	}

}


