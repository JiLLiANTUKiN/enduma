#include "yehey.h"
#include <iostream>
#include <string>
#include <cstdlib>


using namespace std;

string problem[] {"Multiples of 3 and 5", "Even Fibonacci", "Largest Prime Factor of 600851475143", "Largest Palindrome", "Smallest Multiple", "Sum Square Difference", "10001st Prime", "Largest Product in Series","Special Pythagorean Triplet","Summation of primes", "Exit"};
const int num_problems=10;
const int Exit=num_problems+1;

int main()
{
    //cout << "Hello world!" << endl;
    bool done = false;
    int i = 1, ch = 0;
    yehey proj;

    while (done == false)
    {
        system("cls");
        for (i = 0; i < num_problems+1; i++) {
            cout << i+1 << ". " << problem[i] << endl;
        }
		cout<<"Choose problem: ";
		cin>>ch;
		switch (ch)
		{
		case 1:

				proj.multiple_3and5();
				break;

            case 2:
                proj.even_fibonacce();
                break;

            case 3:
                proj.largest_prime_factor();
                break;

            case 4:
                proj.largest_palindrome();
                break;

            case 5:
                proj.smallest_multiple();
                break;

            case 6:
                proj.sum_square_diff();
                break;

            case 7:
                proj.ten_th_1st_prime();
                break;

		case 8:
			proj.largest_product_in_series();
			break;
		case 9:
			proj.special_pytho_triplet();
			break;
		case 10:
                 proj.summation_of_primes();
                 break;

		case Exit:

				cout<<"            sorry sir kung late :) hirap pag walng partner eh ;)         "<<endl;

				done=true;
				break;

		}
		system("PAUSE");
    };

    return 0;
}
