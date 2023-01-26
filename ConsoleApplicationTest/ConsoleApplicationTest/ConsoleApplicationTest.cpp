// ConsoleApplicationTest.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
#include "fonctions.h"

using namespace std;

int manima()
{
    
    //srand(time(0));
    //int randomNum = rand()%10;
    //int myNumber = randomNum % 10;

    //cout << "##########################################Guest my number###############################\n";
    

    //cout << "The trandom number is " << randomNum  <<"\n";
    //cout << "My number is " << myNumber << "\n";

    /*
    int chances = 7;
    int total = chances;
    bool victory = false;
    int number;

    while (chances > 0 && !victory)
    {
        cout << "Enter a number: ";
        cin >> number;
        if (number > randomNum) {
            cout << "Your number is greater choose a lower number\n";
            chances--;
        }
        if (number < randomNum) {
            cout << "Your number is lower choose a greater number\n";
            chances--;
        }
        if (number == randomNum) {
            victory = true;
            int attemp = total - chances +1;
            cout << "You have won after " << attemp << " attemps";
        }
    }
    
    if (chances == 0 && !victory) {
        cout << "The good number was" << randomNum;
    }
    
    
    string name;
    cout << "Hello enter a name: ";
    cin >> name;
    string greeting = "Hello " + name;

    if (name == "Hamouda") {
        greeting += ", I know you";
    }
    cout << greeting << '\n';


    int taille = name.length();

    cout << "Your name is " +name+ " and is " << taille << " words long\n";
    string beginning = greeting.substr(greeting.find(' ') + 1);
    cout << "Beginning contains " + beginning+"\n";

    if (beginning == name) {
        cout << "expected result." << '\n';
    }
    */
    //play();
    //makeWordsCollection();

    return 0;

};


// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
