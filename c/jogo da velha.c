#include<stdio.h>
#include <stdbool.h>

/*

INDICE
0 - vazio
1 - jogador01
2 - jogador02

STATE
0 - continuar jogo
1 - parar jogo

*/

int game[9];
bool state = true;

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

void horinzontal(void) {
	for (int i = 0; i <= 6; i+=3) {
		if (game[i] == game[i+1] && game[i] == game[i+2] && game[i] != 0) {
			state = false;
		}
	}
}
void vertical(void) {
	for (int j = 0; j <= 2; j++) {
		if (game[j] == game[j+3] && game[j] == game[j+6] && game[j] != 0) {
			state = false;
		}
	}
}
void diagonal(void) {
	if (game[0] == game[4] && game[0] == game[8] && game[0] != 0) {
		state = false;
	}

	if (game[2] == game[4] && game[2] == game[6] && game[2] != 0) {
		state = false;
	}
}	
void noMoreSpace(void) {
	for (int i = 0; i <= 8; i++) {
		if (game[i] == 0) {break;}
		if (i == 8) {state = false;}
	}
}

bool verifyGame() {

	horinzontal();
	vertical();
	diagonal();
	noMoreSpace();

	return state;
}

int main() {
	
	start();
	printGame();
	
	while (verifyGame()) {

		for (int i = 1; i <= 2; i++) {
			printf("\n\nJOGADOR 0%i\n\n", i);
			insertGame(i);
			printGame();

			if (!verifyGame()) {break;}
		}

	}
	
	printf("\n\n====== FIM DE JOGO ======");
	
	return 0;
}
