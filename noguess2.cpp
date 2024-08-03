#include <iostream>
#include <cstdlib>
#include <ctime>



using namespace std;

int main()
{
    int num,guess,noOfGuesses;
    bool isGuessed;
    

    srand(time(0));
    num = rand () % 100;
    isGuessed = false;

    while (!isGuessed)
    {
        cout << "Enter an integer greater"
        << " than or equal to 0 and "
        << "less than 100: ";

    cin >> guess;

    cout << endl;
{
//No more than 5 tries and "You Lose!"
      while ((noOfGuesses < 5) && (!isGuessed))

          if (noOfGuesses > 5)
        cout<< "\n You Lose!";
// No more than 5 tries and "You Lose!"
}

   if (guess == num)

    {


   cout << "You guessed the correct "
        << "number."<< endl;
        
// You Win!
cout<< "\nYou win!";
    isGuessed = true;
// You Win!
    }
   else if (guess < num)
    cout << "Your guess is lower than the "
        << "number.\n Guess again!"
        <<endl;
   else
        cout<< "Your guess is higher than "
        << "the number. \n Guess again!"
        << endl;
}

    return 0;
}