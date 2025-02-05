// #include <stdio.h>
// int main(){
// int n;
// scanf("%d",&n);
// for(int i=1;i<n+1;i++){
//     for (int j=1;j<=n-i;j++){
//         printf(" ");
//     }
//     for(int j=1;j<=(2*i)-1;j++){
//         printf("*");
//     }
//     printf("\n");
// }
// for(i=n-1;i>=1;i--){
//     for(j=1;j<n-i;j++){
//         printf(" ");
//     }
//     for(j=1;j<=2*i-1;j++){
//         printf("*");
//     }
//     printf("\n");
// }
// return 0;
// }



#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Read the input for the number of rows for the top half of the diamond

    // Upper part of the diamond (including the middle row)
    for (int i = 1; i <= n; i++) {  // Start from i = 1 instead of i = 0
        // Print spaces before the stars in each row
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars in the current row
        for (int j = 1; j <= 2 * i - 1; j++) {  // The number of stars increases as i increases
            printf("*");
        }
        printf("\n");  // Move to the next row
    }

    // Lower part of the diamond
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces before the stars in each row
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars in the current row
        for (int j = 1; j <= 2 * i - 1; j++) {  // The number of stars decreases as i decreases
            printf("*");
        }
        printf("\n");  // Move to the next row
    }

    return 0;
}
