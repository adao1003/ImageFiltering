#include "library.h"

#include <iostream>

unsigned char filterImage(unsigned char *image, signed char *mask, unsigned int width, unsigned int index) {
    int temp = 0;
    unsigned int n = 0;
    for(int i =-2;i<=2;i++)
        for(int j=-2;j<=2;j++)
        {
            temp+=mask[n]*image[index+(width*i+j)];
            n++;
        }
    int temp1 = 0;
    for(int i = 0 ; i<25; i++)
    {
        temp1+=mask[i];
    }
    if(temp1!=0)
        temp/=temp1;
    return temp;
}
