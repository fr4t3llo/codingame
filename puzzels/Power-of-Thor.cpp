#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/

int main()
{
    int light_x; // the X position of the light of power
    int light_y; // the Y position of the light of power
    int initial_tx; // Thor's starting X position
    int initial_ty; // Thor's starting Y position
    cin >> light_x >> light_y >> initial_tx >> initial_ty; cin.ignore();
    while (1) {
        int remaining_turns;
        cin >> remaining_turns; cin.ignore();
        if ((light_x > initial_tx) && (light_y > initial_ty))
        {
            cout << "SE" << endl; 
            light_x++;
            light_y--;
        }
        else if ((light_x < initial_tx) && (light_y > initial_ty))
        {
            cout << "SW" << endl; 
            light_x++;
            light_y--;
        }
        else if (light_x > initial_tx)
        {
            cout << "E" << endl; 
            light_x++;
        }
        else if (light_y < initial_ty)
        {
            cout << "N" << endl; 
            light_y++;
        }  
        else if (light_x < initial_tx)
        {
            cout << "W" << endl; 
            light_x++;
        }
        else if (initial_ty < light_y)
        {
            cout << "S" << endl; 
            light_y++;
        }
    }
}
