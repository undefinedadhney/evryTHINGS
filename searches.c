#include <stdio.h>
int main() {
  int n,elements[100],search_key,temp=0;
  printf("Enter the number of elements\n");
  scanf("%d",&n);
  printf("Enter the list of numbers \n");
  for (size_t i = 0; i < n; i++) {
    scanf("%d",&elements[i]);
  }

  printf("Enter the element to be searched for\n");
  scanf("%d",&search_key);

  printf("Enter a code\n");
  printf("-------------------------------------------------\n" );
  printf("1:LINEAR SEARCH\n", );
  printf("2:BINARY SEARCH\n", );
  printf("-------------------------------------------------\n" );

  switch (code) {
    case 1:
      //LINEAR SEARCH
      for (size_t i = 0; i < t; i++) {
        if (search_key=element[i]) {
          printf("found the element\n" );
          temp=1;
        }
      }
      if (temp=0) {
        printf("No results found\n");
      }
      break;

    case 2:
      //BINARY SEARCH
      f=0;
      l=n-1;
      m=(f+l)/2;
      while (f<=l) {
        if (search_key>element[i]) {
          f=m+1;
          m=(f+l)/2;
        }
        else if (search_key==element[m]) {
          printf("%d Result found at %d\n",search_key,m );
        }
        else{
          l=m-1;
          m=(f+l)/2;
        }
      }
      if (f>l) {
        printf("No results found\n" );
      }
      break;

    default:
      printf("Enter Valid Code\n" );
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
