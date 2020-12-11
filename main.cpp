#include <iostream>
using namespace std;
#include "ex1_2.h"
#include "ex3.h"

int main()
{   cout << "....... Exercise 1 .......\n\n";
    // Class definition and parameters setting using user inputs
    Rectangle myrect;
    int width, height;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    cout << "Enter the height of the rectangle: ";
    cin >> height;
    myrect.set_params(width,height);
    // Printing outputs
    cout << "\nArea of the rectangle: " << myrect.calc_area();
    cout << "\nSum of the number is: " << myrect.get_sum();
    cout << "\n\n....... End of Exercise 1 .......\n\n";

    cout << "....... Exercise 2 .......\n\n";
    // Class definitions and parameters setting using user inputs
    im_num im1;
    im_num im2;
    cout << "First number\n";
    cout << "Enter real part: ";
    cin >> im1.re;
    cout << "Enter imaginary part: ";
    cin >> im1.im;
    cout << "\nSecond number\n";
    cout << "Enter real part: ";
    cin >> im2.re;
    cout << "Enter imaginary part: ";
    cin >> im2.im;
    // Printing outputs
    cout << "\nReal part of the sum: " << im1.re+im2.re;
    cout << "\nImaginary part of the sum: " << im1.im+im2.im;
    cout << "\n\n....... End of Exercise 2 .......\n\n";
    return 0;
}
