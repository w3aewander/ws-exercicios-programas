#include <iostream>

using namespace std;

int main()
{
    
    srand(time(NULL));
    

    for (int i = 1; i <= 6; i++)
    {

        int r = rand() % 59;

        cout << " " << r ;
    }

    cout << endl;
    return 0;
}