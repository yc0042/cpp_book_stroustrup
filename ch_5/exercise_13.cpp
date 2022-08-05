#include "std_lib_facilities.h"

bool is_valid(string input)
{
    bool result = true;

    

    for(int i = 0; i < input.length(); ++i)
    {
        bool is_digit = false;
        for(int j = 0; j < 10; ++j)
        {
            string digit = to_string(j);
            is_digit = is_digit || input[i] == digit[0];
        }
        result = result && is_digit;
    }

    sort(input.begin(), input.end());
    return result && (std::unique(input.begin(), input.end()) == input.end());
}

int main()
{
    srand(time(NULL));
    string game_board = "4444"; 

    int index1 = 0;
    int index2 = 0;
    int index3 = 0;
    int index4  = 0;

    while(!is_valid(game_board))
    {
        index1 = rand() % 10;
        index2 = rand() % 10;
        index3 = rand() % 10;
        index4 = rand() % 10; 
        game_board = to_string(index1) + to_string(index2) + to_string(index3) + to_string(index4);
    }

    

    cout << "The game is to guess a combination of 4 distinct digits (i.e. 1234), by guessing your own combinations of 4 distinct digits.\nA bull is when you guessed a correct digit in the correct index and a cow is when you guessed a correct digit but in the correct index.\n";

    bool won = false;
    string guess;
    int bulls;
    int cows;
    while(!won)
    {
        if(guess == "win") break;
        bulls = 0;
        cows = 0;
        cout << "Enter your guess:\n";
        cin >> guess;
        if(guess.length() != 4 || !is_valid(guess))
        {
            cout << "Enter in a valid guess!\n";
            continue;
        }
        for(int i = 0; i < 4; ++i)
        {
            bulls += (int)(guess[i] == game_board[i]);
            for(int j = 0; j < 4; ++j)
            {
                cows += (int)(guess[i] == game_board[j]);
            }
        }
        
        cows -= bulls;
        
        if(bulls == 4) break;
        
        cout << "Your guess scored " << bulls << " bulls and " << cows << " cows. \n";

    }
    cout << "You won! with a correct guess of " << game_board << endl;
    return 0;
}