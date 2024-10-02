#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  
    
    while (T--) {
        int B1, B2, B3;
        
        scanf("%d %d %d", &B1, &B2, &B3);
        
                int full_count = B1 + B2 + B3;
                
        if (full_count <= 1) {
            printf("Water filling time\n");
        } else {
            printf("Not now\n");
        }
    }
    return 0;
}
