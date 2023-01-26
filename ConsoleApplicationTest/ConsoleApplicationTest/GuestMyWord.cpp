#include <iostream>
#include <string>
using namespace std;

void play() {

	string magicalWord;
	cout << "##################### Guest my Word game ######################";

	cout << "Enter a word";
	cin >> magicalWord;
	int lengthWord = magicalWord.length();
	cout << "The word is " << lengthWord << " letters long";

	//Declare the void word with x
	string toFindWord;
	for (int i = 0; i < lengthWord; i++) {
		toFindWord[i] = 'x';
	}

	cout << "The true word is " + magicalWord+ "\n";
	cout << "The word that we have is " + toFindWord + "\n";

	char letter;
	bool victory = false;
	int chances = 10;

	while (!victory && chances > 0) {
		cout << "Enter a letter: ";
		cin >> letter;

		//Finding if the word has the letter choosed
		int contained = magicalWord.find(letter);
		if (contained < lengthWord) {
			cout << "Your letter is part of the word\n";

			// Looping into my word to replace x by the letter
			for (int i = 0; i < lengthWord; i++) {
				if (magicalWord[i] == letter) {
					toFindWord[i] = letter;
				}
			}

			// printing the word find till now
			cout << "You have this " + toFindWord;

			chances--;
		}
		else {
			cout << "Your letter is not part of the word\n";

			// printing the word find till now
			cout << "You have this " + toFindWord;

			chances--;
		}

		// Victory
		if (toFindWord == magicalWord) {
			victory = true;
			chances = 10 - chances;
			cout << "You have won after " << chances << " attempts";
		}
	}
	

	


}