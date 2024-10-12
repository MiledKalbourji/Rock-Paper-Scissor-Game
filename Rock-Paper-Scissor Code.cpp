#include <iostream>
#include <stdlib.h> 
#include <ctime>
#include <conio.h>
using namespace std; 

int main()
{ 
    string player_name; 
    cout << "Enter Your Name:"; 
    cin >> player_name ; 
    system("cls");

    //Asking for the user input with rounds 
    int rounds; 
    cout << player_name << " How many rounds you want to play?"
    cin >> rounds; 

    //Player count score
    int player_score = 0, computer_score = 0;
    for (int round=1; round<==rounds; round++)

    //How the user will decide by there choices 
    {
        system("cls"); 
        int player_choice,computer_choice;
        cout << "Round NO:" << round << "/" << rounds << endl;
        cout << player_name << " 's Score =" << player_score << endl;
        cout << "Computer Score =" << computer_score << endl;
        cout << "1. Rock" << endl;
        cout << "2. Paper" << endl;
        cout << "3. Scissor" << endl;

        //to not let the user pick numbers greater than 3
        do{
            cout << "Select your choice: " ;
            cin >> player_choice ;

        }while(player_choice !=1 && player_choice != 2 && player_choice !==3)
        //How the computer will make its random choice
        srand(time(0));
        computer_choice = (rand()%3)+1; 

        //Combinations to make the player win/lose
        if (player_choice == 1 && computer_choice ==3)
        {
            cout << "Player Wins!" << endl;
            player_score++;
        }
        else if (player_choice ==2 && computer_choice ==1)
        {
            cout << "Player Wins!" << endl 
            player_score++; 
        }
        else if(player_choice ==3 && computer_choice ==2)
        {
            cout << "Player Wins!"; 
            player_score++;
        }
        //If the user/computer have a Draw
        else if (player_choice == computer_choice)
        {
            cout << "DRAW" <<endl 
        }
        //If the user picks any number besides 1-3 the computer wins
        else
        {
            cout << "Computer Wins" << endl
            computer_score++;
        }
        cout << "Press any key to continue.." << endl;
        getch();
    }
    //Determine wether or not if the computer/user won or drawn
    if(computer_score == player_score)
    {
        cout << "Game is Drawn" << endl; 
    }
    else if (player_score > computer_score)
    {
        cout << player_name << "You Have WON the Game!" << endl;
    }
    else 
    {
        cout << "Computer Won the Game" << endl;
    }
    return 0;
}
