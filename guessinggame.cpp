/*Guessing game - Aman Tesfu - Sep 4 2024
  The rules are:
1. No global variables. (Global constants are all right.)

2. No strings. Not ever. (You can use cstrings/character arrays, and the cstring and cctype libraries are okay. In fact, I recommend using strcmp and strlen in your projects.)

3. You should include <iostream>, not stdio. (This applies more to C programmers.) Also, use "new" and "delete" instead of "malloc" and "free".

4. You should avoid using a mouse when possible. Learn the shortcuts. If you ever work through a shell, you won't have a mouse available to you.

5. Only use break/continue if you must, like in switch statements. Otherwise don't use them.*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  bool isPlaying = true;
  bool guessedRight = false;
  int input = 0;
  char endGameChar = 'n';
  char inputChar = ' ';
  int guessCount = 0; //track guesses
  while(isPlaying == true){
    srand(time(0));
    int randNum = rand()%101; //generate a random number between 0-100 inclusive
    cout << endl << "You are playing the guessing game. Guess a number and hit enter." << endl;
    while(guessedRight == false) {
      cin >> input;
      if (input == randNum){
	cout << endl << "Got it in " << guessCount << " I'm so proud of you :'(" << endl;
	//respond to input
	guessedRight = true;
      } else if (input > randNum) {
	cout << "Nope!!! (Try a smaller number)" << endl;
	guessCount++;
      } else if (input < randNum) {
        cout << "Nope!!! (Try a bigger number)" << endl;
	guessCount++;
      }
    }
    cout << "Do you want to stop playing? Press n to end your game." << endl;
    guessCount = 0;
    cin >> inputChar;
    if (inputChar == endGameChar){
      cout << "sad2cugo" << endl;
      isPlaying = false;
    } else {
      guessedRight = false;
    }
  }
  return 0;
}
