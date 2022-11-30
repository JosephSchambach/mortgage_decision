#include <iostream>
using namespace std;

// Function prototypes
void getScore(int *);
void printDecision(int);

// Main function to make decision
int main()
{
    // Initialize and declare variable score
    int score{0};

    // Get score and make decision
    getScore(&score);
    printDecision(score);
}

// Function to get score from user
void getScore(int *score)
{
    cout << "Please enter a score: ";
    cin >> *score;
}

// Function to output decision
void printDecision(int score)
{
    // Initialize and declare variable decision
    string decision = "do not provide mortgage";
    switch (score)
    {
    case 5:
        decision = "provide mortgage at 5% interest rate";
        break;

    case 4:
        decision = "provide mortgage at 6% interest rate";
        break;

    case 3:
        decision = "provide mortgage at 7% interest rate";
        break;

    default:
        break;
    }

    // Output the mortgage decision
    cout << "The entered borrowing score of " << score
         << " is considered to be a " << decision
         << " for the current loan application." << endl;
}
