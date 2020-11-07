#include <iostream>

using namespace std;

int main()
{
    /*
    string num;
    cin >> num;
    
    string r_num; //numero revertido

    for( int i = num.length() - 1; i > -1; i -= 1)
    {
        r_num.push_back(num[i]);
    }

    cout << r_num << endl;
    */

   int num;
   cin >> num;

   if(num == 0) cout << 0;

   int r_num;
   int resto;
   while (num != 0)
   {
       resto = num%10;
       r_num = num*10 + resto;

       num /= 10;
       cout << resto;
   }

   cout << endl;
}