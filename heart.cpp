#include <iostream>
#include <math.h>
int main()
{
    for (float y = 9; y > -6; y -= .5f)
    {
        for (float x = -8; x < 9; x += .25f)
        {
            if (pow(pow(x, 2) + pow(y, 2) - 25, 3) < 25 * pow(x, 2) * pow(y, 3))
            {
                std::cout << "#";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
    
    
    return 0;
}
