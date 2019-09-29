#include <iostream>

enum class GameState {
	INIT,
	PLAY,
	END,
	EXIT
};

void GenerateMysteryNumber(int& mystery) {
	
}

int main() {
	GameState gameState = GameState::INIT;

	unsigned int mysteryNumber;

	while (gameState != GameState::EXIT);
	{
		switch (gameState) {
		case GameState::INIT:
			srand(static_cast<unsigned int>(time(0)));
			mysteryNumber = rand() % 101;
			gameState = GameState::PLAY;
		case GameState::PLAY:
			/*
				Cette partie doit:
				- essayer de deviner le nombre mystère à l'aide d'un function
				- Si le nombre mystre est trouvé il faut passer à l'état END
			*/
			//Not sure what the instruction mean, the user must find the number or the program itself must find it?
			int userGuess;
			int tries 0;
			bool numberFound = false;
			while (!numberFound) {
				std::cout << "Try to find the mystery number ! " << endl;
				cin >> userGuess;
				tries++;
				gameState = GameState::END;
			break;

		case GameState::END:
			std::cout << "You took " << tries << " turn to find the mystery number, that is : " << mysteryNumber;
			break;

		case GameState::EXIT:
			break;
		}
	}

	
	system("pose");
	return EXIT_FAILURE;
}