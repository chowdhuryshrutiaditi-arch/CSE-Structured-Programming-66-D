#include <stdio.h>
#include <string.h>

int main() {
    
    char city[20] = "Dhaka";
    printf("Length of '%s' = %lu\n", city, strlen(city)); // Output: 5

    city[3] = '\0';
    printf("After inserting '\\0' at index 3: '%s' (Length = %lu)\n", city, strlen(city)); // Output: Dha (Length = 3)

    
    char broken[4] = {'T', 'e', 's', 't'};
     
    printf("Valid char array size: %lu bytes\n", sizeof(broken));

    return 0;
}
