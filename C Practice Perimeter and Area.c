// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int width;
    int height;
    
    printf("Welcome to the rectangle calculator after you \ninput the width and height of your rectangle\nI will tell you its perimeter and area in cm.\n\n");
    printf("Please enter the rectangles width in cm:");
    scanf("%d",&width);
       printf("Please enter the rectangles height in cm:");
    scanf("%d",&height);
    
    int perimeter = width + height;
    int area = width * height;
    
    printf("Your rectangle has a perimeter of %dcm and an area of %dcm",perimeter,area);
    
    
    return 0;
}
