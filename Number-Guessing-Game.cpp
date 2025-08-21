#include <iostream>
#include <cstdlib>
class numberGuess
{
public:
	void choiceFunction() {
		int choice, usersGuess;
		int guessCount = 1;
		int guesschance = 0;
		srand(time(NULL));
		int RandomGuess = std::rand() % 100;
	
		std::cout << "Please select the difficulty level: \n";
		std::cout << "1. Easy (10 chances)\n 2. Medium (5 chances)\n 3. Hard (3 chances)\n";
		std::cout << "Enter your choice: ";
		std::cin >> choice;
		while (!(choice >= 1 && choice <= 3)) {
			std::cout << "Wrong input  Try again!!\n";
			std::cout << "Choose the difficulty \n";
			std::cout << "1. Easy (10 chances)\n 2. Medium (5 chances)\n 3. Hard (3 chances)\n";
			std::cin >> choice;
		}
		if (choice == 1) {
			guesschance = 10;
			std::cout << "Great! You have selected the Easy difficulty level.\n";
			std::cout << "Let's start the game!\n";
			std::cout << "You have "<<guesschance<<" chance\n";
			for (int i=1;i<=guesschance;i++){
				std::cout<<"\nEnter yours guess: ";
				std::cin>>usersGuess;
				if (RandomGuess == usersGuess){
					std::cout<<"Congratulations! You guessed the correct number in "<<guessCount<< " attempts.\n";
					break;
				}else{
					if (RandomGuess > usersGuess){
						if (guessCount == guesschance){
							std::cout<<"Incorrect! The number is greater than "<<usersGuess<<".\n";
							std::cout<<"The number was "<<RandomGuess;
							break;
						}else{
							std::cout<<"Incorrect! The number is greater than "<<usersGuess<<".\n";
						}
					}else {
						if (guessCount == guesschance){
							std::cout<<"Incorrect! The number is less than "<<usersGuess<<".\n";
							std::cout<<"The number was "<<RandomGuess;
							break;
						}else{
							std::cout<<"Incorrect! The number is less than "<<usersGuess<<".\n";
						}
					}
					guessCount++;
				}
			}
		}else if (choice == 2) {
			guesschance = 5;
			std::cout << "Great! You have selected the Medium difficulty level.\n";
			std::cout << "Let's start the game!\n";
			std::cout << "You have "<<guesschance<<" chance\n";
			for (int i=1;i<=guesschance;i++){
				std::cout<<"\nEnter yours guess: ";
				std::cin>>usersGuess;
				if (RandomGuess == usersGuess){
					std::cout<<"Congratulations! You guessed the correct number in "<<guessCount<< " attempts.\n";
					break;
				}else{
					if (RandomGuess > usersGuess){
						if (guessCount == guesschance){
							std::cout<<"Incorrect! The number is greater than "<<usersGuess<<".\n";
							std::cout<<"The number was "<<RandomGuess;
							break;
						}else{
							std::cout<<"Incorrect! The number is greater than "<<usersGuess<<".\n";
						}
					}else {
						if (guessCount == guesschance){
							std::cout<<"Incorrect! The number is less than "<<usersGuess<<".\n";
							std::cout<<"The number was "<<RandomGuess;
							break;
						}else{
							std::cout<<"Incorrect! The number is less than "<<usersGuess<<".\n";
						}
					}
					guessCount++;
				}
			}
		}else{
			guesschance = 3;
			std::cout << "Great! You have selected the Hard difficulty level.\n";
			std::cout << "Let's start the game!\n";
			std::cout << "You have "<<guesschance<<" chance\n";
			for (int i=1;i<=guesschance;i++){
				std::cout<<"\nEnter yours guess: ";
				std::cin>>usersGuess;
				if (RandomGuess == usersGuess){
					std::cout<<"Congratulations! You guessed the correct number in "<<guessCount<< " attempts.\n";
					break;
				}else{
					if (RandomGuess > usersGuess){
						if (guessCount == guesschance){
							std::cout<<"Incorrect! The number is greater than "<<usersGuess<<".\n";
							std::cout<<"The number was "<<RandomGuess;
							break;
						}else{
							std::cout<<"Incorrect! The number is greater than "<<usersGuess<<".\n";
						}
					}else {
						if (guessCount == guesschance){
							std::cout<<"Incorrect! The number is less than "<<usersGuess<<".\n";
							std::cout<<"The number was "<<RandomGuess;
							break;
						}else{
							std::cout<<"Incorrect! The number is less than "<<usersGuess<<".\n";
						}
					}
					guessCount++;
				}
			}
		}
	}
};
int main()
{
	numberGuess NumberGuess;
	std::cout << "Welcome to the Number Guessing Game! \n";
	std::cout << "I'm thinking of a number between 1 and 100.\n";
	std::cout << "You have 5 chances to guess the correct number.\n\n";
	NumberGuess.choiceFunction();
	return 0;
}

