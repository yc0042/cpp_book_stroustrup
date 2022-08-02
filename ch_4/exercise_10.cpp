#include "std_lib_facilities.h"

int main()
{
    srand(time(NULL));

    string player_move;
    string bot_move;

    vector<string> moves = {"rock", "paper", "scissors"};

    cout << "Enter your move (rock/paper/scissors): \n";
    while(cin >> player_move)
    {
        int bot_move_index = rand() % 3;
        bot_move = moves[bot_move_index];
        bool win = (player_move == "rock" && bot_move == "scissors") || (player_move == "paper" && bot_move == "rock") || (player_move == "scissors" && bot_move == "paper");
        bool tie = (player_move == bot_move);
        if(tie)
        {
            cout << "You tied with the computer who also played " << bot_move <<"!\n";
        }
        else if(win)
        {
            cout << "You beat the computer's " << bot_move << " with your " + player_move << endl;
        }
        else
        {
            cout << "You lost to the computer's " + bot_move + " with your " + player_move + "! :(\n";
        }
    }
    return 0;
}
