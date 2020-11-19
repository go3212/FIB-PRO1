#include <iostream>
using namespace std;


bool is_valid_date(int d, int m, int a)
{
  bool is_valid_date = false;
  bool is_leap_year = (a % 100 == 0) ? ((a / 100) % 4 == 0 ? true : false) : (a % 4 == 0 ? true : false);
  
  int inconsistencies = 0;
  if (m == 2) is_leap_year ? inconsistencies = -1 : inconsistencies = -2;
  else if (m >= 8) (m%2 == 0) ? inconsistencies = 1 : inconsistencies = 0;
  else (m%2 == 0) ? inconsistencies = 0 : inconsistencies = 1;
  
  // Leap year? 
  bool is_year_valid = (a >= 1800 and a <= 9999);
  bool is_month_valid = (m > 0 and m <= 12);
  bool is_day_valid = (d > 0 and d <= (30 + inconsistencies));

  if (is_day_valid and is_month_valid and is_year_valid) is_valid_date = true;
  
  return is_valid_date;
}


int main() {
  int d, m, a;
  while (cin >> d >> m >> a)
    cout << (is_valid_date(d, m, a) ? "true" : "false") << endl;
}
