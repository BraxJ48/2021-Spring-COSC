#include <iostream>
int randomNumGenerator(const int max, const int min)
{
    return rand() % max + min;
}

int rangeNumToGuess(const int max, const int min)
{
    return ((max - min) / 2) + min;
}

int rangeNum(const int max, const int min)
{
    return max - min;
}

bool startGame()
std::cout <<
"Ready to play?\n"
"S - for start game\n"
"Q - for quit\n"
"Type one of the choice: ";
std::cin >> userChoice;
Player(tolower(userChoice));
restart();
bool Player(const char userchoice)
{
    if (userchoice == COMPUTER_GUESSER)
    {
        return computerGuesser();
    }
    else if (userchoice == QUIT)
    {
        std::cout << "Thank you for playing\n";
    }
}

bool computerGuesser()
{
    char userInput{};
    int maxNum = MAX_NUMBER;
    int minNum = MIN_NUMBER;
    int guessNum{};
    int guessCount{ 1 };
    int range;

    std::cout << "Think of a number between 1 to 100\n";

    while (maxNum != minNum)
    {
        ++guessCount;
        range = rangeNum(maxNum, minNum);

        if (range == 1)
        {
            guessNum = maxNum;
        }
        else
        {
            guessNum = rangeNumToGuess(maxNum, minNum);
        }

        std::cout << "Is your number less than: " << guessNum << "?(y/n): ";
        std::cin >> userInput;

        switch (userInput)
        {
        case ANSWER_IS_YES:
            maxNum = guessNum - 1;
            break;
        case ANSWER_IS_NO:
            minNum = guessNum;
            break;
        default:
            std::cout << "That is a wrong option\n";
            guessCount -= 1;
            break;
        }

        if (maxNum == minNum)
        {
            std::cout << "Your number is: " << maxNum << std::endl;
            std::cout << "It took " << guessCount << " guesses for me to guess" << std::endl;
        }

    }
    return true;
}
bool restart()
{
    char userChoice{};
    std::cout << "Play again? (y/n): ";
    std::cin >> userChoice;

    char lowerUserChoice = tolower(userChoice);

    if (lowerUserChoice == ANSWER_IS_YES)
    {
        startGame();
    }
    else if (lowerUserChoice == ANSWER_IS_NO)
    {
        computer(QUIT);
    }
    else
    {
        std::cout << "Please choose the available option\n";
        restart();
    }

    return true;
}