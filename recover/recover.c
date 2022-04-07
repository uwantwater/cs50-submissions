#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    //checks for correct usage
    if (argc != 2)
    {
        printf("Usage: ./recover IMAGE\n");
        return 1;
    }
    //open file
    FILE *file = fopen(argv[1], "r");
    //checks if file is accessible
    if (file == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }
    FILE *img = NULL;

    BYTE buffer[512];
    char filename[8];
    int counter = 0;
    while (fread(buffer, sizeof(BYTE), 512, file) == 512)
    {
        //checks if buffer starts with jpeg values
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            //write if it is start
            if (counter == 0)
            {
                sprintf(filename, "%03i.jpg", counter);
                img = fopen(filename, "w");
                fwrite(&buffer, sizeof(BYTE), 512, img);
                counter += 1;
            }
            //to write images other than t he starting image
            else if (counter > 0)
            {
                fclose(img);
                sprintf(filename, "%03i.jpg", counter);
                img = fopen(filename, "w");
                fwrite(&buffer, sizeof(BYTE), 512, img);
                counter += 1;
            }
        }
        //keep writing images
        else if (counter > 0)
        {
            fwrite(&buffer, sizeof(BYTE), 512, img);
        }

    }

    //Close file
    fclose(file);
    fclose(img);
}