#include <iostream>
#include <string>
int main()
{
    std::cout << std::endl;
    std::cout << "== Casino Guess Game ==" << std::endl
              << std::endl;
    std::cout << "- GAME RULES -" << std::endl;
    std::cout << "IF YOU WON YOU GET 10X TIMES YOUR BET" << std::endl;
    std::cout << "IF YOU LOSE, YOU LOSE ALL YOUR BET" << std::endl;

    std::string Player_Name = "";
    int Player_Balance = 0, Player_Bet = 0, Player_Guess;
    char Play_Again;

    srand(time(0));
    int Computer_Number = rand() % (1 + 3 - 1) + 1;

    std::cout << "Your Name : ";
    std::cin >> Player_Name;

    std::cout << std::endl;

    std::cout << "What Is Your Balance : ";
    std::cin >> Player_Balance;

    std::cout << std::endl;

    std::cout << std::endl;

    do
    {
        // Get Player's Betting Amount

        do
        {
            std::cout << "Enter Bet : ";
            std::cin >> Player_Bet;

            if (Player_Bet > Player_Balance)
            {
                std::cout << std::endl;
                std::cout << "Your Bet > Your Balance. ReEnter Data";
            }
        } while (Player_Bet > Player_Balance);

        // Get Player's Guess
        do
        {
            std::cout << "Guess Winning Number [ 1 - 3 ]: ";
            std::cin >> Player_Guess;

            if (Player_Guess <= 0 || Player_Guess > 3)
            {
                std::cout << "Please Enter Valid Data" << std::endl;
            }
        } while (Player_Guess <= 0 || Player_Guess > 3);

        if (Computer_Number == Player_Guess)
        {

            std::cout << "Congrats ! You Won : " << Player_Bet * 10 << std::endl;
            Player_Balance = Player_Balance + (Player_Bet * 10);
        }
        else
        {
            std::cout << "Good Luck Next Time, You Lost : " << Player_Bet << std::endl;
            Player_Balance = Player_Balance - Player_Bet;
        }
        std::cout << "The Winning Number Was " << Computer_Number << std::endl;
        std::cout << Player_Name << " You Have " << Player_Balance << std::endl;

        if (Player_Balance == 0)
        {
            std::cout << "You Have No Balance To Play" << std::endl;
            break;
        }

        std::cout << "Do You Want To Play Again [ Y / N ] : ";
        std::cin >> Play_Again;
    } while (Play_Again == 'Y' || Play_Again == 'y');

    std::cout << "Thank You For Playing Your Balance Is " << Player_Balance << std::endl;
    return 0;
}