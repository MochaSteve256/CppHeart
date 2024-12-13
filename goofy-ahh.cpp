#include <iostream>
#include <math.h>
int main()
{
    for (float y = 8; y > -8; y -= .5f)
    {
        for (float x = -9; x < 9; x += .25f)
        {
            if (sin(x*y) < 0)
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
