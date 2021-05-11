// Въвеждане и извеждане
#include <iostream>
// Произволни числа
#include <cstdlib>
// Взимане на времето
#include <ctime>
// стандартен списък с числа
using namespace std;
// Главна функция
int main()
{
    //Въвеждат се минимума и максимума
    int a, b;
    // Извежда се написаното в кавичките
    cout << "Guess My Number Game\n\n";
    cout << "Enter min number" << endl;
    cin >> a;
    cout << "Enter max number" << endl;
    cin >> b;
    srand(time(0)); //seed random number generator
    int num = rand() % (b - a) + a; // random number between 1 and 100

    // Декларира се променлива guess равна на 0 и променлива, която да брои опитите на потребителя
    int guess = 0, counter;
    // Докато числото, което въвеждаме, за да познаем е различно от рандом числото
    while (guess != num) {
        cout << "Enter a number between " << a << " and " << b << endl;
        cin >> guess;
        counter ++;
        if( guess == 0 ){
            cout << "Zero is not an option" << endl;
            break;
        }
        if (guess > num) {
            cout << "Too high!\n\n";
        }
        else if (guess < num)
            {
                cout << "Too low!\n\n";
            }
        else {
            cout << "\nCorrect! You got it in " << counter << " number of guesses ";
        }
    }

    return 0;
}
