#include <iostream>

using namespace std;

int main()
{
  int secretNum = 0;
  int input = 0;
  bool stillPlaying = true;
  char playAgain;
  bool play = true;
  int numGuesses = 0;
  
  srand (time(NULL));
  secretNum = (rand() % 100) + 1;
  
  while(stillPlaying == true){
    cout << "What is your guess?" << endl;
    cin >> input;

    if(input == secretNum){
      numGuesses = numGuesses + 1;
      play = true;
      cout << "Good Job!" << endl;
      cout << "It took you " << numGuesses << " guesses!" << endl;
      cout << "Play Again? Please enter y or n." << endl; 
      while(play == true){
	cin >> playAgain;
	if(playAgain == 'n'){
	  stillPlaying = false;
	  cout << "Bye!";
	  play = false;
	}
	else if(playAgain == 'y'){
	  stillPlaying = true;
	  srand (time(NULL));
	  secretNum = (rand() % 100) + 1;
	  play = false;
	}
	else{
	  cout << "Please enter y or n." << endl;
	  play = true;
	}
      }
    }
    else if(input < secretNum){
      numGuesses = numGuesses + 1;
      cout << "Too Low!" << endl;
    }
    else{
      numGuesses = numGuesses + 1;
      cout << "Too High!" << endl;
    }
  }
  return 0;
}
