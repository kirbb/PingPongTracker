#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void run();
void update();
void menu();

int main()
{
    run();
}

void run()
{
    update();
    menu();
}

void update()
{

}

void menu()
{
    bool run = true;
    string response = "";

    while (run)
    {
        cout << "Please enter a command: ";
        cin >> response;

        transform(response.begin(), response.end(), response.begin(), ::toupper);

        if (response == "PLAYER")
        {
            cout << "You selected 'Show player'" << endl;
        }
        else if (response == "HISTORY")
        {
            cout << "You selected 'Show recent history'" << endl;
        }
        else if (response == "HELP")
        {
            cout << "Available commands:" << endl;
            cout << "'PLAYER': Show statistics for a specific player" << endl;
            cout << "'HISTORY': Show recent games" << endl;
            cout <<"'HELP': Show available commands" << endl;
            cout <<"'QUIT': Quit program" << endl;
        }
        else if (response == "QUIT")
        {
            run = false;
        }
        else
        {
            cout << "Command not recognized, enter 'HELP' to show available commands" << endl;
        }
    }
}