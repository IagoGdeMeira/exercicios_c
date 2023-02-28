#include <stdio.h>
#include <math.h> 

int main() {
    float co, ca, hip;
    
    scanf("%f", &co);
    scanf("%f", &ca);
    hip = sqrt(pow(co, 2) + pow(ca, 2));
    
    printf("HIPOTENUSA: %.2f", hip);
    
    return 0;
}
