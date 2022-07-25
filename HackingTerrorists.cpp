/*
Xenia DeNoyer
Using References to Hack and Bankrupt Terrorists assignment
7/24/22
*/

#include <iostream> // Header file
using namespace std; // std for Standard

// Declaring the functions with pointers in it
void checkBalanceNormal(int& r_terroristBalance, int& r_joesBalance);
void checkBalanceHacked(int& r_terroristBalance, int& r_joesBalance);

// Main
int main()
{
    // Introduces the program
    cout << "---Initializing Program to Hack the Terrorists---" << endl;
    cout << "Please standby..." << endl;
    cout << "----------------------------------" << endl;

    // Terrorist's funds and balances
    int terroristFunds = 420000;
    int terroristBalance = 0;
    // Joe's Coffee Shop funds and balances
    int joesFunds = 1234;
    int joesBalance = 0;

    // Prints the funds and balances
    cout << "The terrorists have $" << terroristFunds << " in funds." << endl;
    cout << "The terrorists have $" << terroristBalance << " in balance." << endl;
    cout << "Joe's Coffee Shop has $" << joesFunds << " in funds." << endl;
    cout << "Joe's Coffee Shop has $" << joesBalance << " in balance." << endl;
    cout << "----------------------------------" << endl;

    // Transaction between balance and funds
    cout << "Beginning transaction... Please standby..." << endl;
    // Changes the balances to the funds
    terroristBalance = terroristFunds;
    joesBalance = joesFunds;
    cout << "Transaction completed..." << endl;
    cout << "----------------------------------" << endl;

    // Calls function for the normal balances
    checkBalanceNormal(terroristBalance, joesBalance);
    cout << "The terrorists now have $" << terroristBalance << endl;
    cout << "Joe's Coffee Shop now has $" << joesBalance << endl;
    cout << "----------------------------------" << endl;

    // Initialing hacking sequence
    cout << "Preparing to hack the terrorists... Please standby..." << endl;
    cout << "Initialing swap between terrorists and Joe's Coffee shop... Please standby..." << endl;
    cout << "Transaction completed..." << endl;
    cout << "----------------------------------" << endl;

    // Calls function for the hacked balances
    checkBalanceHacked(terroristBalance, joesBalance);
    cout << "The terrorist now have $" << terroristBalance << endl;
    cout << "Joe's Coffee Shop now has $" << joesBalance << endl;
    cout << "----------------------------------" << endl;
    
    // Completion
    cout << "The operation has been completed..." << endl;
    cout << "Please standby as operation shuts down..." << endl;

    system("pause"); // Pauses system
    return 0; // Returns zero
}
 

// Checks the normal balances || void instead of int since we already declared the function
void checkBalanceNormal(int& r_terroristBalance, int& r_joesBalance)
{
    // Sets balance
    r_terroristBalance = 420000;
    r_joesBalance = 1234;

    // Confirms locally
    cout << "The transaction shows that: " << endl;
    cout << "Terrorists have $" << r_terroristBalance << endl;
    cout << "Joe's Coffee Shop has $" << r_joesBalance << endl;
}

// Checks the hacked balances
void checkBalanceHacked(int& r_terroristBalance, int& r_joesBalance)
{
    // Swaps balances
    r_joesBalance = r_terroristBalance;
    r_terroristBalance = 1234;
    // Confirms locally
    cout << "The transaction shows that: " << endl;
    cout << "Terrorists have $" << r_terroristBalance << endl;
    cout << "Joe's Coffee Shop has $" << r_joesBalance << endl;
}