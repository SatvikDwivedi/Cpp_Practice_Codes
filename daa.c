// // // strassen
// // #include<stdio.h>
// // int main(){
// //   int a[2][2], b[2][2], c[2][2], i, j;
// //   int m1, m2, m3, m4 , m5, m6, m7;
 
// //   printf("Enter the 4 elements of first matrix: ");
// //   for(i = 0;i < 2; i++)
// //       for(j = 0;j < 2; j++)
// //            scanf("%d", &a[i][j]);
 
// //   printf("Enter the 4 elements of second matrix: ");
// //   for(i = 0; i < 2; i++)
// //       for(j = 0;j < 2; j++)
// //            scanf("%d", &b[i][j]);
 
// //   printf("\nThe first matrix is\n");
// //   for(i = 0; i < 2; i++){
// //       printf("\n");
// //       for(j = 0; j < 2; j++)
// //            printf("%d\t", a[i][j]);
// //   }
 
// //   printf("\nThe second matrix is\n");
// //   for(i = 0;i < 2; i++){
// //       printf("\n");
// //       for(j = 0;j < 2; j++)
// //            printf("%d\t", b[i][j]);
// //   }
 
// //   m1= (a[0][0] + a[1][1]) * (b[0][0] + b[1][1]);
// //   m2= (a[1][0] + a[1][1]) * b[0][0];
// //   m3= a[0][0] * (b[0][1] - b[1][1]);
// //   m4= a[1][1] * (b[1][0] - b[0][0]);
// //   m5= (a[0][0] + a[0][1]) * b[1][1];
// //   m6= (a[1][0] - a[0][0]) * (b[0][0]+b[0][1]);
// //   m7= (a[0][1] - a[1][1]) * (b[1][0]+b[1][1]);
 
// //   c[0][0] = m1 + m4- m5 + m7;
// //   c[0][1] = m3 + m5;
// //   c[1][0] = m2 + m4;
// //   c[1][1] = m1 - m2 + m3 + m6;
 
// //    printf("\nAfter multiplication using Strassen's algorithm \n");
// //    for(i = 0; i < 2 ; i++){
// //       printf("\n");
// //       for(j = 0;j < 2; j++)
// //            printf("%d\t", c[i][j]);
// //    }
 
// //    return 0;
// // }

// // lcs
// #include <stdio.h>  
// #include <string.h>  
// int i, j, m, n, LCS_table[20][20];  
// char S1[20], S2[20], b[20][20];  
// void lcsAlgo() {
//   gets(S1);
//   gets(S2);
//   m = strlen(S1);  
//   n = strlen(S2);  
//   for (i = 0; i <= m; i++)  
//     LCS_table[i][0] = 0;  
//   for (i = 0; i <= n; i++)  
//     LCS_table[0][i] = 0;  
//   for (i = 1; i <= m; i++)  
//     for (j = 1; j <= n; j++) {  
//       if (S1[i - 1] == S2[j - 1]) {  
//         LCS_table[i][j] = LCS_table[i - 1][j - 1] + 1;  
//       } else if (LCS_table[i - 1][j] >= LCS_table[i][j - 1]) {  
//         LCS_table[i][j] = LCS_table[i - 1][j];  
//       } else {  
//         LCS_table[i][j] = LCS_table[i][j - 1];  
//       }  
//     }  
  
//   int index = LCS_table[m][n];  
//   char lcsAlgo[index + 1];  
//   lcsAlgo[index] = '\0';  
  
//   int i = m, j = n;  
//   while (i > 0 && j > 0) {  
//     if (S1[i - 1] == S2[j - 1]) {  
//       lcsAlgo[index - 1] = S1[i - 1];  
//       i--;  
//       j--;  
//       index--;  
//     }  
  
//     else if (LCS_table[i - 1][j] > LCS_table[i][j - 1])  
//       i--;  
//     else  
//       j--;  
//   }  
//   printf("S1 : %s \nS2 : %s \n", S1, S2);  
//   printf("LCS: %s", lcsAlgo);  
// }  
  
// int main() {  
//   lcsAlgo();  
//   printf("\n");  
// }

