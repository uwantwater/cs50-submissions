#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    //initialize required variables
    int average = 0;
    int red = 0;
    int green = 0;
    int blue = 0;
    //loop for columns
    for (i = 0, i < height, i++)
    {
        //loop for rows
        for (j = 0, j < width, j++)
        {
            red = image[i][j].rgbtRed;
            green = image[i][j].rgbtGreen;
            blue = image[i][j].rgbtBlue;
            //taking the average of the 3 RGB values
            average = round((red+green+blue)/3.0);
            //substituting the average values to the pixel
            image[i][j].rgbtRed = average;
            image[i][j].rgbtGreen = average;
            image[i][j].rgbtBlue = average;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    //initialize required variables
    int sepia = 0;
    int red = 0;
    int green = 0;
    int blue = 0;
    //loop for columns
    for (i = 0, i < height, i++)
    {
        for (j = 0, j < width, j++)
        {
            red = image[i][j].rgbtRed;
            green = image[i][j].rgbtGreen;
            blue = image[i][j].rgbtBlue;
            //calculate sepia values and cap at 255
            sepiaRed = .393 * red + .769 * green + .189 * blue;
            if (sepiaRed > 255)
                sepiaRed = 255;
            sepiaGreen = .349 * red + .686 * green + .168 * blue;
            if (sepiaGreen > 255)
                sepiaGreen = 255;
            sepiaBlue = .272 * red + .534 * green + .131 * blue;
            if (sepiaBlue > 255)
                sepiaBlue = 255;
            //substitute pixel with sepia rgb values
            image[i][j].rgbtRed = sepiaRed;
            image[i][j].rgbtGreen = sepiaGreen;
            image[i][j].rgbtBlue = sepiaBlue;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
