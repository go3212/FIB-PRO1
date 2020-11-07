#include <iostream>

int main()
{
    int t_sec;
    std::cin >> t_sec;

    int hours, minutes, seconds;
    hours = (t_sec)/3600;
    minutes = (t_sec - (hours*3600))/60;
    seconds = (t_sec - (hours*3600) - (minutes*60));
    
    std::cout << hours << " " << minutes << " " << seconds << std::endl;

}