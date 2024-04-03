#include <iostream>


int main(int argc, char *argv[]) {
    double accountBalance =0.0;
    double depositAmount =0.0;
    bool userFinished = false;
    char userFinishedChoice;
    while(!userFinished) {
        std::cout << "Welcome to Big Booty Bank." << std::endl; 
        std::cout << "Your current balance is: $" << accountBalance << std::endl; 
        std::cout << "Enter the amount you want to deposit: $"; 
        /* Read in next input from user */
        std::cin >> depositAmount;
        /* Update the account balance */
        accountBalance += depositAmount;
        std::cout << "Your new balance is: $" << accountBalance << std::endl;
        std::cout << "Are you done yet? Y/N: ";
        std::cin >> userFinishedChoice;
        if (userFinishedChoice == 'Y' || userFinishedChoice == 'y') {
             userFinished = true; 
            }
    }
    std::cout << "Thanks for using Big Booty Bank. Real chill of you fam. Aight, I'm out. Peace!" << std::endl;
 
    return 0;
 
}

