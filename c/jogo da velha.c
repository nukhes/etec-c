#include<stdio.h>

/*

TODO: refatorar codigo

INDICE
0 - neutro
1 - jogador01
2 - jogador02

STATE
0 - continuar jogo
1 - parar jogo

*/

int game[9];
int state = 0;

void start() {
	for (int i = 0; i <= 8; i++) {
		game[i] = 0;
	}
}
void printGame() {
	printf("\n%i|%i|%i\n%i|%i|%i\n%i|%i|%i", game[0], game[1], game[2], game[3], game[4], game[5], game[6], game[7], game[8]);
}
void insertGame(player) {
	
	int pos;
	
	printf("digite o numero do lugar para jogar: ");
	scanf("%i", &pos);
	
	pos--;
	
	while (game[pos] != 0) {
		printf("* ESTE ESPACO JA ESTA PREENCHIDO, ESCOLHA OUTRO: ");
		scanf("%i", &pos);
	}
	
	game[pos] = player;
}
void verifyGame() {
	
	// horinzontal
	for (int i = 0; i <= 6; i+=3) {
		
		if (game[i] == game[i+1] && game[i] == game[i+2] && game[i] != 0) {
			state = 1;
		}
		
	}

	// vertical
	for (int j = 0; j <= 2; j++) {
		
		if (game[j] == game[j+3] && game[j] == game[j+6] && game[j] != 0) {
			state = 1;
		}
		
	}
	
	// diagonal
	if (game[0] == game[4] && game[0] == game[8] && game[0] != 0) {
		state = 1;
	}
	
	if (game[2] == game[4] && game[2] == game[6] && game[2] != 0) {
		state = 1;
	}
	
	int c = 0;
	
	// velha
	if (game[0] != 0 && game[1] != 0 && game[2] != 0 && game[3] != 0 && game[4] != 0 && game[5] != 0 && game[6] != 0 && game[7] != 0 && game[8] != 0) {
		state = 1;
	}
}

int main() {
	
	start();
	printGame();
	
	while (state == 0) {
		printf("\n\nJOGADOR 01\n\n");
		insertGame(1);
		printGame();
		verifyGame();
		
		if (state == 0) {
			printf("\n\nJOGADOR 02\n\n");
			insertGame(2);
			printGame();
			verifyGame();
		}
	}
	
	printf("\n\n====== FIM DE JOGO ======");
	
	sleep(30);
	
	return 0;
}