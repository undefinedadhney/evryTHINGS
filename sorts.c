#include <stdio.h>
int main(int argc, char const *argv[]) {
  int n,element[100],code;
  printf("Enter the number of elements \n" );
  scanf("%d",&n );

  printf("Enter the elements \n" );
  for (size_t i = 0; i < n; i++) {
    scanf("%d",&element[i] );
  }

  printf("Enter the code\n" );
  printf("----------------------------------------------\n" );
  printf("1:INSERTION SORT\n" );
  printf("2:SELECTION SORT\n" );
  printf("----------------------------------------------\n" );
  scanf("%d",&code );

  switch (Code) {
    case 1:
      //INSERTION SORT
      for (size_t i = 1; i < n; i++) {
        d=i;
        while (d>0&&element[i+1]>element[i]) {
          temp=element[i+1];
          element[i+1]=element[i];
          element[i]=temp;
        }
      }
      break;

    case 2:
      //SELECTON SORT
      for (size_t i = 0; i <= t-2 ; i++) {
        for (size_t j = i; j <= t-1 ; j++) {
          if (element[j]>element[i]) {
            temp=element[j];
            element[j]=element[i];
            element[i]=temp;
          }
        }
      }
      break;

    default:
    printf("Invalid Code\n" );

  }

  printf("Enter Code\n" );
  printf("------------------------------------------\n" );
  printf("1:FOR ASCENDING SERIES\n" );
  printf("2:FOR DECENDING SERIES\n" );
  printf("------------------------------------------\n" );
  scanf("%d",&code );

  switch (code) {
    case 1:
      for (size_t i = 0; i < t; i++) {
        printf("%d\n",element[i] );
      }

    case 2:
      for (size_t i = t-1; i >=0; i--) {
        printf("%d\n",element[i] );
      }

    default:
      printf("Invalid Code\n" );
  }
  return 0;
}
