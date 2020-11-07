#include <iostream>

//year, days, hours, minutes, sec

int main()
{
    u_int32_t years, days, hours, minutes, sec;
    std::cin >> years;
    std::cin >> days;
    std::cin >> hours;
    std::cin >> minutes;
    std::cin >> sec;

    u_int32_t t_sec; //stores the total ammount of seconds
    t_sec = years*365*24*3600 + days*24*3600 + hours*3600 + minutes*60 + sec;
    
    std::cout << t_sec << std::endl;

}