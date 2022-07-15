#include "main.h"
#include <stdio/h>

/*
 *
 * *_strcat(char *dest, char *src) - Function that concatenates two strings
 *
 * @dest: Destination String
 *
 * @src: Source String
 *
 * */
char *_strcat(char *dest, char *src)

{

		int i = 0, lenght = 0;



			while (*(dest + lenght) != '\0')

						lenght++;

				for (i = 0; *(src + i) != '\0'; i++)

						{

									*(dest + lenght) = *(src + i);

											lenght++;

												}

					*(dest + lenght) = *(src + i);



						return (dest);

}
