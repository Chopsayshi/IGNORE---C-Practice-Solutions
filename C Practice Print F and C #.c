// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char hash = '#';
    // Will print a large 'F'
    printf("######\n#\n#####\n#\n#\n#\n\n");
    
    // Will print a large 'C'
    printf("%4c####\n",hash);
    printf("%2c#%6c#\n",hash,hash);
    printf("#\n#\n#\n#\n#\n");
    printf("%2c#%6c#\n",hash,hash);
    printf("%4c####\n",hash);
    
    return 0;
}
