#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

void Hard(int yourNumber, int myNumber, int GuessHard);
void Impossible(int yourNumber, int myNumber);


int main() 
{
    srand(time(0));
    string LevelHard;
    int myNumber;
    int yourNumber;
    int GuessHard;

    cout << "Choose level: Easy, Hard or Impossible: ";
    cin >> LevelHard;

    if(LevelHard == "Easy")
    {
        GuessHard = rand() % 10 + 1;
        Hard(yourNumber, myNumber, GuessHard);
    }
    else if(LevelHard == "Hard")
    {
        GuessHard = rand() % 10000 + 1;
        Hard(yourNumber, myNumber, GuessHard);
    }
    else
    {
        Impossible(yourNumber, myNumber);
    }

}

void Hard(int yourNumber, int myNumber, int GuessHard)
{
    myNumber = GuessHard;

    do
    {
        cout << "Try to guess number" << endl;
        cin >> yourNumber;

    if(yourNumber == myNumber)
        {
            cout << "You Won!" << endl;
            break;
        }
    else if(yourNumber < myNumber)
        {
            cout << "Your number is too low" << endl;
        }
    else
        {
            cout << "Your number is too high" << endl;
        } 
    }
    while(true);
    
}

void Impossible(int yourNumber, int myNumber)
{
    bool OutOfGuessLimit = true;
    int GuessLimit = 10;
    myNumber = rand() % 10000 + 1;

    do
    {
        cout << "Try to guess number from 1-10000: ";
        cin >> yourNumber;

    if(yourNumber == myNumber && OutOfGuessLimit)
        {
            cout << "You Won!" << endl;
            break;
        }
    else if(yourNumber < myNumber && OutOfGuessLimit)
        {
            cout << "Your number is too low" << endl;
            GuessLimit--;
            cout << "You have " <<  GuessLimit <<  " times to guess left" << endl;
        }
    else if(yourNumber > myNumber && OutOfGuessLimit)
        {
            cout << "Your number is too high" << endl;
            GuessLimit--;
        }
    else
    {
        cout << "You Lost!" << endl;
        break;
    }

    if(GuessLimit == 0)
    {
        OutOfGuessLimit = false;
    } 

    }
    while(true);
    
}