// In digital world colors are speciƒed in RGB format, with values of R, G, and B varying on
// integer scale from 0 to 255. Colors are mentioned in Cyan-Magenta-Yellow-Black (CMYK)
// format with values of C, M, Y and K varying on a real scale from 0.0 to 1.0. Convert RGB
// color to CMYK as per formula:
// - White=Max(red/255,green/255,blue/255)
// - Cyan=(white - red/255)/white
// - Magenta=(white - green/255)/white
// - Yellow=(white - blue/255)/white
// - Black=1 - white
// Note: if RGB values are all 0, then the CMY values are all 0 and the K value is 1
#include <iostream>
using namespace std;

int main()
{
    int red, green, blue;
    double cyan, magenta, yellow, black, white;
    cout << "Enter RGB values from 0 to 255: ";
    cin >> red >> green >> blue;
    // all RGB values are 0
    if (red == 0 && green == 0 && blue == 0)
    {
        black = 1.0;
        cyan = magenta = yellow = 0.0;
    }
    else
    {
        // Find white
        double r = red / 255.0, g = green / 255.0, b = blue / 255.0;

        if (r >= g && r >= b)
            white = r;
        else if (g >= r && g >= b)
            white = g;
        else
            white = b;

        // Calculate CMYK
        cyan = (white - r) / white;
        magenta = (white - g) / white;
        yellow = (white - b) / white;
        black = 1 - white;
    }
    cout << "Cyan: " << cyan << endl;
    cout << "Magenta: " << magenta << endl;
    cout << "Yellow: " << yellow << endl;
    cout << "Black: " << black << endl;
    return 0;
}
