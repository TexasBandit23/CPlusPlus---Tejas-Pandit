/*
Tejas Pandit
Last Edited: 9/11/2023
This code creates a guessing game. It tells the user whether their 
guess is too high, too low, or correct, and displays the number of guesses

Rules:
1. No Global Variables
2. No Strings
3. Use <iostream>, not stdio
4. Avoid using a mouse
5. Only use a break when necessary
*/

#include <iostream>

using namespace std;

int main()
{
  //intialize global variables
  int secretNum = 0;
  int input = 0;
  bool stillPlaying = true;
  char playAgain;
  bool play = true;
  int numGuesses = 0;

  //set random seed and get a random number
  srand (time(NULL));
  secretNum = (rand() % 100) + 1;

  //while loop that runs until the corrent number is guessed
  while(stillPlaying == true){
    cout << "What is your guess?" << endl;
    cin >> input;

    //check if guess is correct
    if(input == secretNum){
      numGuesses = numGuesses + 1;
      play = true;
      cout << "Good Job!" << endl;
      cout << "It took you " << numGuesses << " guesses!" << endl;
      cout << "Play Again? Please enter y or n." << endl; 
      while(play == true){
	cin >> playAgain;
	//check if user does not want to play again
	if(playAgain == 'n'){
	  stillPlaying = false;
	  cout << "Bye!";
	  play = false;
	}
	//check if user does want to play again
	else if(playAgain == 'y'){
	  stillPlaying = true;
	  srand (time(NULL));
	  secretNum = (rand() % 100) + 1;
	  play = false;
	}
	//check if user didn't enter y or n
	else{
	  cout << "Please enter y or n." << endl;
	  play = true;
	}
      }
    }
    //check if users guess is too low
    else if(input < secretNum){
      numGuesses = numGuesses + 1;
      cout << "Too Low!" << endl;
    }
    //check if guess is too high
    else{
      numGuesses = numGuesses + 1;
      cout << "Too High!" << endl;
    }
  }
  return 0;
}
