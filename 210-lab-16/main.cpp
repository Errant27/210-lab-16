#include <iostream>
#include <iomanip>
#include <random>
using namespace std;

class Color
{
private:
    int red;    // Private member variables for the red, green & blue values
    int blue;
    int green;
    
public:
    Color () { red = 0;  green = 0; blue = 0; } // Default Color constructor

    Color (int num1) : red{ num1 }    // Color constructor with one paramter
    { blue = 0; green = 0; }
    
    Color (int num1, int num2) : red{ num1 }, green{ num2 }    // Color constructor with two paramters
    { blue = 0; }
    
    Color (int num1, int num2, int num3) : red{ num1 }, blue{ num2 }, green{ num3 }
    {}    // Color constructor with full paramters
    
    void setRed(int r) { red = r; }    // Setter Functions
    void setGreen(int g) { green = g; }
    void setBlue(int b) { blue = b; }
    
    int getRed() { return red; }    // Getter Functions
    int setGreen() { return green; }
    int getBlue() { return blue; }
    
    void print_colors() {     // Print Function
        cout << "R: " << red << endl;
        cout << "G: " << green << endl;
        cout << "B: " << blue << endl;
    }
};    // End of class

int gen_random_num();     // Function prototype to generate random number

int main()
{
    int n1;    // int variable to store a random number
    int n2;
    int n3;
    
    n1 = gen_random_num();
    n2 = gen_random_num();
    n3 = gen_random_num();
    Color colorOne{n1, n2, n3};    // Full color constructor called
    
    n1 = gen_random_num();
    n2 = gen_random_num();
    Color colorTwo{n1, n2};    // Partial constructor called

    n1 = gen_random_num();
    Color colorThree{n1};    // Partial constructor called
    
    Color colorFour;    // Default constructor called
    
    cout << "Color 1\n";    // Each color outputted via the print_colors member function
    colorOne.print_colors();
    cout << "---------" << endl;
    cout << "Color 2\n";
    colorTwo.print_colors();
    cout << "---------" << endl;
    cout << "Color 3\n";
    colorThree.print_colors();
    cout << "---------" << endl;
    cout << "Color 4\n";
    colorFour.print_colors();
    
    return 0;
}

int gen_random_num()     // Function definition to generate random number
{
    int num;
    
    random_device randNum;
    uniform_int_distribution<int>range(0, 255);
    num = range(randNum);    // Random number is generated and stored in num
    
    return num;     // random number returned
}
