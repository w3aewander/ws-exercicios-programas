#include <iostream>

using namespace std;


int fibonacci(int num)
{

int t1 = 1, t2 = 1, nextTerm = 0;

cout << "\nO termo é: ";

    for (int i = 1; i <= num; ++i) 
    {
        // Prints the first two terms.
        if(i == 1) {
        //cout << t1 << ", ";
          continue;
        }
        if(i == 2) {
        //cout << t2 << ", ";
          continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        //cout << nextTerm << ", ";


    }

    return nextTerm;

}

int main()
{

    int n;

    cout << "Qual o termo da sequência que deseja exibir? ";
    cin >> n;

    cout << "Fibonacci de " << n << " é: " << fibonacci(n) << endl;

    return 0;
}