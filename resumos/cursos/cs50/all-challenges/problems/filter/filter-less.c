#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    //normalize values into a grayscale, calculate the average of that values
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int averageColor = round((image[i][j].rgbtRed + image[i][j].rgbtBlue + image[i][j].rgbtGreen) / 3.0);
            image[i][j].rgbtRed = averageColor;
            image[i][j].rgbtBlue = averageColor;
            image[i][j].rgbtGreen = averageColor;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {

            int originalRed = image[i][j].rgbtRed;
            int originalBlue = image[i][j].rgbtBlue;
            int originalGreen = image[i][j].rgbtGreen;

            int sepiaRed = round(.393 * originalRed + .769 * originalGreen + .189 * originalBlue);
            int sepiaGreen = round(.349 * originalRed + .686 * originalGreen + .168 * originalBlue);
            int sepiaBlue = round(.272 * originalRed + .534 * originalGreen + .131 * originalBlue);

            if (sepiaRed > 255)
            {
                sepiaRed = 255;
            }
            if (sepiaGreen > 255)
            {
                sepiaGreen = 255;
            }
            if (sepiaBlue > 255)
            {
                sepiaBlue = 255;
            }

            image[i][j].rgbtRed = sepiaRed;
            image[i][j].rgbtBlue = sepiaBlue;
            image[i][j].rgbtGreen = sepiaGreen;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    //take individuals pixels and replace the position to oposite
    RGBTRIPLE holdImage[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            holdImage[i][j] = image[i][(width - 1) - j];
        }
    }

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j] = holdImage[i][j];
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    //take and image and blur creating blur effect
    // Blur = sum all corners / number of corners
    // if height = 0 || height = height - 1 || width = 0 || width = width - 1 we got corners
    // topLeft = [0][0]
    // topRight = [0][width - 1]
    // bottomLeft = [height - 0][0]
    // bottomRight = [height - 1][width - 1]
    RGBTRIPLE holdImage[height][width];

    // ROW
    for (int row = 0; row < height; row++)
    {
        // COLUMN
        for (int column = 0; column < width; column++)
        {

            int counter = 0; //Count neighbours
            float sumColorRed = 0;
            float sumColorGreen = 0;
            float sumColorBlue = 0;

            int mapRow[] = {row - 1, row, row + 1};
            int mapColumn[] = {column - 1, column, column + 1};

            for (int x = 0; x < 3; x++)
            {
                for (int y = 0; y < 3; y++)
                {
                    int columnIndex = mapRow[x];
                    int rowIndex = mapColumn[y];

                    if (columnIndex >= 0 && columnIndex < width  && rowIndex >= 0 && rowIndex < height)
                    {
                        RGBTRIPLE actualPixel = image[columnIndex][rowIndex];
                        sumColorRed += actualPixel.rgbtRed;
                        sumColorGreen += actualPixel.rgbtGreen;
                        sumColorBlue += actualPixel.rgbtBlue;
                        counter++;
                    }
                }
            }

            holdImage[row][column].rgbtRed =  round(sumColorRed / counter);
            holdImage[row][column].rgbtGreen = round(sumColorGreen / counter);
            holdImage[row][column].rgbtBlue = round(sumColorBlue / counter);
        }
    }

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j] = holdImage[i][j];
        }
    }
    return;
}