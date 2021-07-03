#include <iostream>

using namespace std;


int main(int argc, char *argv[])
{
//Task 1
int x0 = 69;
long x1 = -4233233;
long long x2 = 9200200200200;
unsigned int x3 = 3;
short x4 = -2255;
char x5 = 'E';
float x6 = 3.234;
double x7 = 0.12312;
cout << "type int = " << x0 << "\n" << "type long = " << x1 << "\n" << "type long long = " << x2 << "\n" << "type unsigned int = " << x3 << "\n" << "type short = " << x4 << "\n" << "type char = " << x5 << "\n" << "type float = " << x6 << "\n" << "type double = " << x7 << endl;

//Task 2
    enum eTictactoe {X, O, blank};

//Task 3

    int iTictactoe [3][3] = {{blank, blank, blank},
                       {blank, blank, blank},
                       {blank, blank, blank}};

//Task 4
    struct sField {
        int iTictactoe [3][3];
        long lPlayer1;
        long lPlayer2;
        char cPlayer1Symbol;
        char cPlayer2Symbol;
        bool bPlayer1wins;
        bool bPlayer2wins;
    };

//Task 5
    struct sStructure {
        union {
            int a;
            float b;
            char c;
        };
        int isInt:1;
        int isFloat:1;
        int isChar:1;
    } e1;
    e1.a = 'w';
    e1.isChar = 1;
    e1.isFloat = 0;
    e1.isInt = 0;

    return 0;

}
