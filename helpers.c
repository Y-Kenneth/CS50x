#include "helpers.h"

void colorize(int height, int width, RGBTRIPLE image[width][height])
{
    // Change all black pixels to a color of your choosing. Black pixels = 0x00
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (image[i][j].rgbtRed == 0x00 && image[i][j].rgbtGreen == 0x00 && image[i][j].rgbtBlue == 0x00)
            {
                image[i][j].rgbtRed = 0xff;
                image[i][j].rgbtGreen = 0x14;
                image[i][j].rgbtBlue = 0x93;
            }
        }
    }
}
