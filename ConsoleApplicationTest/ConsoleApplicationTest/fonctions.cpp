#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std; 

int somme(int number1, int number2) {
    return number1 + number2;
}

int soustraction(int number1, int number2) {
    return number1 - number2;
}


int produit(int number1, int number2) {
    return number1 * number2;
}


int division(int number1, int number2) {
    return number1 / number2;
}


int modulo(int number1, int number2) {
    return number1 % number2;
}
void play() {

	string magicalWord;
	cout << "##################### Guest my Word game ######################\n";

	cout << "Enter a word: ";
	cin >> magicalWord;
	int lengthWord = magicalWord.length();
	cout << "The word is " << lengthWord << " letters long\n";

	//Declare the void word with x
	string toFindWord=magicalWord;
	for (int i = 0; i < lengthWord; i++) {
		toFindWord[i] = 'x';
	}

	cout << "The true word is " + magicalWord + "\n";
	cout << "The word that we have is " + toFindWord + "\n";

	char letter;
	bool victory = false;
	int chances = 10;

	while (!victory && chances > 0) {
		cout << "Enter a letter: ";
		cin >> letter;
		cout << "\n";

		//Finding if the word has the letter choosed
		int contained = magicalWord.find(letter);
		if (contained < lengthWord && contained >=0) {
			cout << "Your letter is part of the word\n";

			// Looping into my word to replace x by the letter
			for (int i = 0; i < lengthWord; i++) {
				if (magicalWord[i] == letter) {
					toFindWord[i] = letter;
				}
			}

			// printing the word find till now
			cout << "You have this " + toFindWord+"\n";
			chances--;
		}
		else {
			cout << "Your letter is not part of the word\n";

			// printing the word find till now
			cout << "You have this " + toFindWord+"\n";
			chances--;
		}

		// Victory
		if (toFindWord == magicalWord) {
			victory = true;
			chances = 10 - chances;
			cout << "You have won after " << chances << " attempts";
		}

		if (chances == 0 && !victory) {
			cout << "You have lost. The perfect word was " + magicalWord;
		}
	}
}

void makeWordsCollection() {
	int number;
	cout << "Enter the number of the words you want to enter: ";
	cin >> number;

	vector<string> words;
	string word;


	for (int i = 0; i < number; i++) {
		cout << "Enter your word: ";
		cin >> word;
		words.push_back(word);
		cout << "\n";
	}

	sort(begin(words), end(words));
	for (auto item : words) {
		cout << "The word is " + item+ "\n";
	}


}