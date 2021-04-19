#include <iostream>

int main()
{
    const int width = 256;
    const int height = 256;

    // PPM Render
    std::cout << "P3\n" << width << ' ' << height << "\n255\n";

    for (int j = 0; j < height; j++)
    {
        for (int i = 0; i < width; i++)
        {
            double r = double(j) / height;
            double g = 0.2;
            double b = double(height - j) / height;

            int red = static_cast<int>(255 * r);
            int green = static_cast<int>(255 * g);
            int blue =static_cast<int>(255 * b);

            // PPM Render
            std::cout << red << ' ' << green << ' ' << blue << '\n';
        }
    }

    return 0;
}