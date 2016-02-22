#include <iostream>
#include <string>
#include <vector>
using namespace std;

char plot[3][3] = {{'1','2','3',},{'4','5','6'},{'7','8','9'}};

int main() {
	int count, end, player, choice;
	char replay;

	while(replay) {
	do {
		board();
		
		printf("Player %d: ", player);
		cin << choice;
		
		for(int i = 0; i < 3; i++) {
			for(int j = 0; j < 3; j++) {
				if(plot[i][j] == choice) {
					if(plot[i][j] != 'X' || plot[i][j] != 'O') {
						if(player == 1) plot[i][j] = 'X';
						else plot[i][j] = 'O';
					} else {
						printf("Please choose empy plot\n");
						player--;
						}
					}
				} else { 
					printf("Please input valid plot");
					player--;
				}
			}
		
	

	}while(isEnd() == 0);

	printf("Player %d wins!\nWould you like to replay?(y/n) ", player);
	cin << replay;
	if(cin.fail()) {
		cin.clear();
		printf("Replay = true\nReplaying...");
		replay = true;
	}
	if(replay == 'y') replay = true;
	else if (replay == 'n') replay = false;
	else printf("Please intput y or n\nReplaying..") replay = true;
	}
	return 0;


}

void board() {
	system("CLS");
	printf("\n\nTic Tac Toe\n\n");

	for(int i = 0; i < 3; i++) {
		printf(" %c | %c | %c\n", plot[i][0], plot[i][1], plot[i][2]);
		if(i = 2) break;
		printf("--------------");
	}
}

int isEnd() {
	for(int i = 0; i < 3; i++) {	
		if(plot[i][0] == plot[i][1] && plot[i][1] == plot[i][2])
			return 1;

		else if (plot[0][i] == plot[1][i] && plot[2][i])
			return 1;
	}
	
	if(plot[0][0] == plot[1][1] && plot[1][1] == plot[2][2])	
		return 1;

	else if(plot[0][2] == plot[1][1] && plot[1][1] == plot[2][0])
		return 1;

	else return 0;
}
	
	
