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
			break;

		case GameState::END:
			/*
				Cette partie doit afficher le nombre de coups qui ont été nécessaire pour trouver le nombre mystère et indiquer quel est ce nombre mystère
			*/
			break;

		case GameState::EXIT:
			break;
		}
	}

	
	system("pose");
	return EXIT_FAILURE;
}