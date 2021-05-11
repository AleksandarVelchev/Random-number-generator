// ��������� � ���������
#include <iostream>
// ���������� �����
#include <cstdlib>
// ������� �� �������
#include <ctime>
// ���������� ������ � �����
using namespace std;
// ������ �������
int main()
{
    //�������� �� �������� � ���������
    int a, b;
    // ������� �� ���������� � ���������
    cout << "Guess My Number Game\n\n";
    cout << "Enter min number" << endl;
    cin >> a;
    cout << "Enter max number" << endl;
    cin >> b;
    srand(time(0)); //seed random number generator
    int num = rand() % (b - a) + a; // random number between 1 and 100

    // ��������� �� ���������� guess ����� �� 0 � ����������, ����� �� ���� ������� �� �����������
    int guess = 0, counter;
    // ������ �������, ����� ���������, �� �� ������� � �������� �� ������ �������
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
