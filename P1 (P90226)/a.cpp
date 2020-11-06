#include <iostream>
#include <string>

int main()
{
    std::string a;
    std::string b;

    std::cin >> a;
    std::cin >> b;

    int i = 0;
    while(i < a.length() || i < b.length())
    {
        if(a[i] == b[i])
        {
            i += 1;
            continue;
        }

        if(a[i] > b[i]) std::cout << a << " > " << b << std::endl;
        else std::cout << a << " < " << b << std::endl;

        return 0;
    }

    std::cout << a << " = " << b << std::endl;

}