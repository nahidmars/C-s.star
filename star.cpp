#include <iostream>
using namespace std;

void Spacing(int n) {
    // This function take the integer 'n' as an argument and prints n spaces.
    for (int i = 0; i < n; ++i) {
        cout << " ";
    }
}

void Starsicon(int n) {
    //This function take the integer 'n' as an argument and prints n asterisks (*).
    for (int i = 0; i < n; ++i) {
        cout << "*";
    }
}


int main() {
    //The main entry point of the program. It initializes variables,
    //Displays the author's name, and executes the main loop.

    int n;
    //This variable will store the user's input for the number of rows.

    string AuthorName = "hid";  // Author's Name will print in program

    cout << "Author: " << AuthorName << endl;

    while (true) {
        //While loop creates an infinite loop that will continue 
        //Until the user enters a number less than 3 or greater than 25.

        cout << "Enter an integer number between 3 and 25; any other number to terminate: "; // It will ask me to put any number
        cin >> n;
        // "cin >> n" user's input will be stored in this variable 'n'.


        if (n < 3 || n > 25) { //Using OR operator if n is less than 3 and greater than 25 than it will terminate the program.
            cout << "Program is terminated." << endl;
            break;
        }
        /* The function above ^ If the entered number is not among the range of 3 to 25 then
         the program will display a termination message and breaks out of the loop.
         In example, during debugging if I put 2 or 26 it will not show the Pyramid and will eneded up by closing
         If I put 3 or 15 it will show the Pyramid */

         // Print upper pyramid using 'for loop'
        for (int i = 0; i < n; ++i) {
            Spacing(i);
            Starsicon(2 * n - 2 * i - 1); // here the program indent the pyramid in upper triangle shape
            cout << endl;
        }
        //The program then proceeds to print the Upper side pyramid patterns as specified by the user's input 'n'.

        // Print lower pyramid 'for loop'
        for (int i = 0; i < n; ++i) {
            Spacing(n - i - 1);
            Starsicon(2 * i + 1); // here the program indent the pyramid in lower triangle shape
            cout << endl;
        }
        //The program then proceeds to print the Lower side pyramid patterns as specified by the user's input 'n'.

        //The nested 'for' loops are used to print the Pyramid patterns. 
        //They repeat through different patterns and control the number of spaces and asterisks to be printed on each line.

        // Print two sides pyramid
        for (int i = 0; i < n; ++i) {
            Starsicon(i);
            Spacing(2 * (n - i) - 1); // here the program indent the pyramid in right triangle shape
            Starsicon(i);
            cout << endl;
        }
        for (int i = n - 1; i >= 0; --i) {
            Starsicon(i);
            Spacing(2 * (n - i) - 1);// here the program indent the pyramid in left triangle shape
            Starsicon(i);
            cout << endl;
        }
        //The program then proceeds to print the Two sides pyramid patterns as specified by the user's input 'n'.

    }

    return 0;
}
//This 'return'statement indicates that the program has executed successfully. 
//It returns an exit status of 0 to the operating system.
//This program Colab. with AI and other sources. 
