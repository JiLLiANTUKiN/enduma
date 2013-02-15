#include "yehey.h"
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <stdint.h>

using namespace std;


yehey::yehey()
{
	//ctor
}

yehey::~yehey()
{
	//dtor
}

void yehey::multiple_3and5()//PROBLEM NO.1
{

	int num=1000, y=0;


	for (int i=1;i<num;++i)
	{

		if ((i%3==0 )|| (i%5==0))
		{

			y=y+i;

		}

	}

	cout<<"      The sum of all the multiples of 3 or 5 below 1000 is "<<y <<endl;
}

void yehey::even_fibonacce()//PROBLEM NO.2
{
    long a = 1;
	long b = 2;
	long x = 0;
	long evenSum=2;


	while (a+b<4000000) {

		x = a + b;
		a = b;
		b = x;

		if (x%2==0)
			evenSum+=x;
	}

	cout<<"             The sum of even value terms is "<< evenSum   <<endl;


}

void yehey::largest_prime_factor()//PROBLEM NO.3
{
    long long x=600851475143;

    for(int i=2;i<=sqrt(x);i++){
        while(x%i==0 && x!= i){
            x=x/i;
        }
    }

	 cout<<"       The largest prime factor of the number 600851475143 is "<< x <<endl;

}

void yehey::largest_palindrome()//PROBLEM NO.4
{
    int answer = 0;

	for(unsigned int i = 999; i != 99; i--)
		for(unsigned int j = 999; j != 99; j--) {

			int product = i*j;
			stringstream mystr2;
			mystr2 << product;
			string mystr = mystr2.str();
			unsigned int length = mystr.length();
			bool check = true;
			for(unsigned int k = 0; k < length/2; k++)
				if(mystr[k] != mystr[(length-k)-1]) {

					check = false;
					break;

					}

				if(answer <= product && check)
					answer = product;
			}


	cout<<"                          The Largest Palindrome              "<<endl;
	cout<<"          Made From The Product Of Two 3-digit Numbers is "<<answer <<endl;

}

void yehey::smallest_multiple()//PROBLEM NO.5
{

    int num = 20, flag = 0;

    while(flag == 0) {
        if ((num%2) == 0 && (num%3) == 0 && (num%4) == 0    && (num%5) == 0 && (num%6) == 0
            && (num%7) == 0 && (num%8) == 0 && (num%9) == 0 && (num%10) == 0 && (num%11) == 0 && (num%12) ==0
            && (num%13) == 0 && (num%14) == 0 && (num%15) == 0 && (num%16) == 0 && (num%17) == 0 && (num%18)==0
            && (num%19) == 0    && (num%20) == 0)

        {
                flag =  1;

                cout<<"               The smallest positive number that is evenly         "<<endl;
                cout<<"         divisible by all of the numbers from 1 to 20 is "<<num <<endl;

        }

        num++;
    }

}

void yehey::sum_square_diff()//PROBLEM NO.6
{
    long sum1 = 0;
    long sum2 = 0;
    int diff = 0;

    for (int i=1; i != 101; i++)
    {
        sum1 = sum1 + (pow(i, 2));
    }

    for (int j=1; j != 101; j++)
    {
        sum2 = sum2 + j;
    }

    diff = (sum2*sum2) - sum1;

    cout<<"         The difference between the sum of the squares of the first  "<<endl;
    cout<<"         one hundred natural numbers and the square of the sum is "<< endl;
    cout<<                             diff                            <<endl;

}

void yehey::ten_th_1st_prime()//PROBLEM NO.7
{
    int counter = 0;
    for (int i=2; ; i++)
    {
        bool prime=true;
        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0)
            {
                prime=false;
                break;
            }
        }
        if(prime) {
            counter++;
			if (counter==10001) {

				cout<<"       |               The 10 001st prime number is "<< i <<endl;


				break;
			}
		}
    }
}


void yehey::largest_product_in_series()//PROBLEM NO.8
{



	int product=0,n=0,prod=0,b=0,a=0,c=0,d=0,e=0;



string number = "73167176531330624919225119674426574742355349194934"
"96983520312774506326239578318016984801869478851843"
"85861560789112949495459501737958331952853208805511"
"12540698747158523863050715693290963295227443043557"
"66896648950445244523161731856403098711121722383113"
"62229893423380308135336276614282806444486645238749"
"30358907296290491560440772390713810515859307960866"
"70172427121883998797908792274921901699720888093776"
"65727333001053367881220235421809751254540594752243"
"52584907711670556013604839586446706324415722155397"
"53697817977846174064955149290862569321978468622482"
"83972241375657056057490261407972968652414535100474"
"82166370484403199890008895243450658541227588666881"
"16427171479924442928230863465674813919123162824586"
"17866458359124566529476545682848912883142607690042"
"24219022671055626321111109370544217506941658960408"
"07198403850962455444362981230987879927244284909188"
"84580156166097919133875499200524063689912560717606"
"05886116467109405077541002256983155200055935729725"
"71636269561882670428252483600823257530420752963450";


			while(n < 995 )
		{
					a=number[n];
					a=a-48;
					b=number[n+1];
					b=b-48;
					c=number[n+2];
					c=c-48;
					d=number[n+3];
					d=d-48;
					e=number[n+4];
					e=e-48;
					prod =a*b*c*d*e;
				if(prod>product)
					{
						product = prod;
					}
				n++;
		}

		cout<<"         The greatest product of five consecutive digits in the 1000 "<<endl;
		cout<<"               digit number of the following numbers is "<<product <<endl;


		//cout<<product<<endl;
		//cout
}

void yehey::special_pytho_triplet()//PROBLEM NO.9
{
	int a = 0, b = 0, c = 0, sum = 1000, product;
	bool test = false;

	for (a = 1; a < sum / 3 && !test; a++)
		{
			for (b = a; b < sum / 2 && !test; b++)
				{
					c = sum - a - b;

					if ((a*a) + (b*b) == (c*c) )
							{
								test = true;
								product=a*b*c;

								cout<<"              One Pythagorean triplet for which a + b + c = 1000.    "<<endl;
								cout<<"                         The product of abc is "<<product <<endl;

								break;
							}
				}
		}
}


void yehey::summation_of_primes()//PROBLEM NO.10
{
    long num = 2000000;
    long long x = 0;
    long long i;
    for (i=2; i<num; i++)
    {
        bool prime=true;
        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0)
            {
                prime=false;
                break;
            }
        }
        if(prime) {
            //cout << i << endl;
            x=x+i;
		}
    }

    cout<<"         The sum of all the primes below two million is "<< x <<endl;
}
