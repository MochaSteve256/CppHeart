#include <iostream>
#include <math.h>
int main()
{
    for (float y = 8; y > -8; y -= .5f)
    {
        for (float x = -9; x < 9; x += .25f)
        {
            if (x*y < 2 && x*y > 1)
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
