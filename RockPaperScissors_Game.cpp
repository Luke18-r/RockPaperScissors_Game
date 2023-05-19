#include <iostream>
#include <ctime>

using namespace std;

char getUserChoice();
char getComputerChoice();
void ShowChoice(char choice);
void chooseWinner(char player, char computer);



int main() {

	char player;
	char computer;

	player = getUserChoice();
	cout << "Your choice is: " ;
	ShowChoice(player);
	computer = getComputerChoice();

	cout << "The computer choice is: ";
	ShowChoice(computer);
	chooseWinner(player, computer);


}

char getUserChoice() {
	
	char player;
	cout << "Rock-Paper-Scissors Game!\n";

	do {
		cout << "Chose from the listed items below\n";
		cout << "***************************\n";
		cout << " 'r' for rock\n";
		cout << " 'p' for paper\n";
		cout << " 's' for scissors\n";
		cout << "***************************\n";
		cin >> player;


	} while (player != 'r' && player != 'p' && player != 's');
	



	
	
	return player;

}
char getComputerChoice() {
	srand(time(NULL));
	int num = rand() % 3 + 1;
	//num=round(num);

	

	switch (num) {
	case 1: return 'r';
		break;
	case 2: return 'p';
		break;
	case 3: return 's';
		break;

	}


	return 0;
}
void ShowChoice(char choice) {

	switch (choice) {
	case 'r':
		cout << "Rock\n";
		break;

	case 'p':
		cout << "Paper\n";
		break;

	case 's':
		cout << "scissors\n";
		break;
	}


}
void chooseWinner(char player, char computer) {

	switch (player) {
	case 'r': if (computer == 's') {
		cout << "You win!\n";
	}
			else if (computer == 'r') {
		cout << "It's a tie!\n";
	}
			else if (computer == 'p') {
		cout << "You lose!\n";
	}
			break;
	case 'p': if (computer == 'r') {
		cout << "You win!\n";
	}
			else if (computer == 'p') {
		cout << "It's a tie!\n";
	}
			else if (computer == 's') {
		cout << "You lose!\n";
	}
			break;
	case 's': if (computer == 'p') {
		cout << "You win!\n";
	}
			else if (computer == 's') {
		cout << "It's a tie!\n";
	}
			else if (computer == 'r') {
		cout << "You lose!\n";
	}
			break;
	}


}
