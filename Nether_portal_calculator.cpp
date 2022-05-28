#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using namespace std;

// Code created by Spectrasonic, 2022
// Part of the Redstonium Tools

int main()
{
    // Variables
    int x, z, pos;
    float coordsx, coordsz;

    // Print Lines
    cout << "" << endl;
    cout << "Nether portal calculator" << endl;
    cout << "=========================" << endl;

    cout << "Enter the number of X Coord: ";
    cin >> x;
    cout << "Enter the number of Z Coord: ";
    cin >> z;
    cout << "" << endl;

    // Calculations
    cout << "¿Where be place the portal?" << endl;
    cout << "=========================" << endl;
    cout << "1) Nether" << endl;
    cout << "2) Overworld" << endl;
    cout << "=========================" << endl;
    cin >> pos;

    // Switch
    switch (pos)
    {
    case 1:
        // Calculate the coords of the portal in the Nether
        cout << "You Choose Nether" << endl;
        cout << "=========================" << endl;
        cout << "" << endl;
        coordsx = x / 8;
        coordsz = z / 8;
        cout << "" << endl;
        cout << "" << endl;

        system("clear");
        cout << "Your portal be placed in" << endl;
        cout << coordsx << " and " << coordsz << " In the Nether" << endl;

        break;

    case 2:
        // Calculate the coords of the portal in the Overworld
        cout << "Elegiste Overworld" << endl;
        cout << "=========================" << endl;
        cout << "" << endl;
        coordsx = x * 8;
        coordsz = z * 8;
        cout << "" << endl;
        cout << "" << endl;

        system("clear");
        cout << "Your portal be placed in" << endl;
        cout << coordsx << " and " << coordsz << " In the Overworld" << endl;
        break;

    default:
        // in this case the user has entered a wrong number
        system("clear");
        cout << "Nothing Choosed" << endl;
        cout << "Runing again the calculator ^^" << endl;
        main();
        break;
    }
    // Dev Sign
    cout << "" << endl;
    cout << "" << endl;
    cout << "=========================" << endl;
    cout << "Coded with ♥" << endl;
    cout << "By Spectrasonic" << endl;
    cout << "=========================" << endl;
    return 0;
}