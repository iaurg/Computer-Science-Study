#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
    if (argv[1])
    {
        FILE *file;
        file = fopen(argv[1], "r");

        FILE *recoverImg = NULL;
        unsigned char buffer[512];
        int jpegCount = 0;
        char filename[8];

        if (file == NULL)
        {
            fputs("File error", stderr);
            exit(1);
        }


        while (fread(buffer, 512, 1, file) > 0)
        {

            if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
            {
                // If already open image, close
                if (recoverImg != NULL)
                {
                    fclose(recoverImg);
                }

                // Create new file and name it adding 1 into name and increment jpeg count
                sprintf(filename, "%03i.jpg", jpegCount);
                recoverImg = fopen(filename, "w");
                jpegCount++;

            }

            if (recoverImg != NULL)
            {
                // If is not jpeg header write bytes into file
                fwrite(buffer, 512, 1, recoverImg);
            }
        }

        return 0;
    }

    printf("Usage: ./recover image \n");
    return 1;
}