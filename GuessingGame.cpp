#include <iostream>
#include <string>
int main()
{
    std::cout << "\n\n=======================\n\n";
    std::cout << "=== Guessing Game Game ===" << std::endl;
    std::cout << "\n=======================\n\n";

    std::string Player_Name = "";
    std::cout << "Enter Your Name : ";
    std::cin >> Player_Name;

    int Player_Balance = 0;
    std::cout << "Enter Your Balance : "
              << "$";
    std::cin >> Player_Balance;

    int Initial_Amount = 0;
    std::cout << "Enter Your Bet : "
              << "$";
    std::cin >> Initial_Amount;

    std::cout << std::endl;

    std::cout << "########" << std::endl;
    std::cout << "Player Name Is : " << Player_Name << std::endl;
    std::cout << "Player Bet Is : " << Initial_Amount << std::endl;
    std::cout << "Your Balance Is : " << Player_Balance - Initial_Amount << std::endl;
    std::cout << "########" << std::endl;

    std::cout << std::endl;

    std::cout << "RULES OF THE GAME" << std::endl;
    std::cout << "1- Choose Any Number Between 1 To 10" << std::endl;
    std::cout << "2- If You Win You Will Get 10 Times Of Money You Bet" << std::endl;
    std::cout << "3- If Your Bet on Wrong Number You Will Lose Your Betting Amount" << std::endl;
    return 0;
}