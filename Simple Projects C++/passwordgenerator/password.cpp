#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;


char GenerateRandomChar()
{
    const string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    return characters[rand() % characters.length()];
}

string GeneratePassword(int passwordLength)
{
    string password = "";
    for (int i = 0; i < passwordLength; i++)
    {
        password += GenerateRandomChar();
    }
    return password;
    
}

int main()
{
    srand(time(0));
    int passwordLength;
    string CloseTab;

    cout << "Write a password length: ";
    cin >> passwordLength;

    string password = GeneratePassword(passwordLength);

    cout << "Generated password: " << password << endl;

    cout << "Write \"Close\" to hide the tab" << endl;
    cin >> CloseTab;

    if(CloseTab == "Close")
    {
        return 0;
    }

}
