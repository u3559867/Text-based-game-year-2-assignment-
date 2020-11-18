#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>

using namespace std;

// x[2] (DEF) is the maximum number of wrong guess, assume that we start from 4
/* x[5] (level) the difficulty relates the word count
   means that higher level with more word count in a vocab */
//int hangman_runtime = 0 (initialize outside the function call)
int main() {
  string wordlist[27] = { "peace", "alien", "habitat", "planet", "hangman",
                          "negotiate", "foreigner", "surrender", "approach", "commander",
		"native", "indigenous", "adventitious", "extrinsic", "congenital",
		"intrinsic", "inherent", "transmit", "resident", "earth", "galaxy",
		"nasty", "horrid", "awful", "terrible", "spaceship", "alliance"};

  // choose a random word from the above list
  srand(time(0));
  int temp = rand()%(27-runtime);
  string word = wordlist[temp];

  //limit the word length with x[5] (level)
  while (word.length() <= x[5] || word.length() >= x[5]+5) {
    temp = rand()%(27-runtime);
    word = wordlist[temp];
  }
  
  /* Assign answer as a sequence of '-' with specified length
  e.g. ---------- */
  string answer;
  for (int i = 0; i < word.length(); i++) {
    answer += '-';
  }
  
  bool endgame = false;       // indicate whether end game or not
  int num_wrong_guess = 0;    // count the number of wrong guesses
  char guess;                 // the guess letter input by user

  while (!endgame) {
    cout << "Word: " << answer << endl;
    if ( word == answer ) {
      cout << "You got the word!" << endl;
      endgame = true;
    }
    else if (num_wrong_guess == x[2]) {
      cout << "You did not get the word!" << endl;
      endgame = true;
    }
    else {
      cout << "Guess a letter: ";
      cin >> guess;
      if (word.find(guess) != string::npos) {
        /* To update the string answer
           e.g. string word = "abcabc"
           string answer = "------", char c = 'b'
           then ans will become "-b--b-" */
        for (int i = 0; i < word.length(); ++i) {
          if (word[i] == guess)
            answer[i] = guess;
        }
      }
      else
        num_wrong_guess++;
	cout << "You have " << x[2]-num_wrong_guess << " times to guess." << endl;
    }
  }

  if ( word == answer ) {
    runtime += 1;

    // to delete the chosen word in the wordlist
    if (runtime <= 26) {
      for (int i = temp; i < 27-runtime; i++) {
        word[i] = word[i+1];
      }
    }

    return 0;
  }
  else if (num_wrong_guess == x[2])
    return 1;
}