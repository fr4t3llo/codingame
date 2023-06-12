#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

/**
 * Save humans, destroy zombies!
 **/



int main()
{
    // game loop
    while (1) {
        int x;
        int y;
        cin >> x >> y; cin.ignore();
        int human_count;
        cin >> human_count; cin.ignore();
        for (int i = 0; i < human_count; i++) {
            int human_id;
            int human_x;
            int human_y;
            cin >> human_id >> human_x >> human_y; cin.ignore();
            std::cerr << x <<  " " << y << " " << std::endl;
            if (human_count > 1)
            {
                if (human_id == 1)
                {
                    std::cout << human_x << " " << human_y << std::endl;
                }
                else if (human_id == 0 && sqrt((x - human_x) + (y - human_y)) < 0)
                    std::cout << human_x << " " << human_y << std::endl;
            }
            else 
                std::cout << human_x << " " << human_y << std::endl;

        }
        int zombie_count;
        cin >> zombie_count; cin.ignore();
        for (int i = 0; i < zombie_count; i++) {
            int zombie_id;
            int zombie_x;
            int zombie_y;
            int zombie_xnext;
            int zombie_ynext;
            cin >> zombie_id >> zombie_x >> zombie_y >> zombie_xnext >> zombie_ynext; cin.ignore();
            // if (zombie_count > 1)
            // {
                
            //     std::cout << zombie_xnext << " " << zombie_ynext << std::endl; 

            // }
            // std::cout << zombie_xnext << " " << zombie_ynext << std::endl; 
        }
    }
}
