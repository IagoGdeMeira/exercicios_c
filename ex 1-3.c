#include <stdio.h>

int main() {
    float celsius, fahren;
    
    scanf("%f", &celsius);
    fahren = celsius * 1.8 + 32;
    
    printf("%.2f°C = %.2f°F", celsius, fahren);

    return 0;
}
