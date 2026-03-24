#include <stdio.h>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

int main() {
    int width, height, channels;
    unsigned char * image = stbi_load("horse-0.png", &width, &height, &channels, 0);
    
    if (image == NULL) {
        printf("Error: Could not load image\n");
        return 1;
    }
    
    printf("Image loaded: %dx%d, channels: %d\n", width, height, channels);
    stbi_image_free(image);
    
    return 0;
}
