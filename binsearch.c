#include <stdio.h>
#define SIZE 100000
int binsearch(int x, int v[], int n);

int main() {
  int arr[SIZE];
  for ( int i = 0; i < SIZE; i++)
    arr[i] = i * 2;
  
  printf("%d\n", binsearch2(51, arr, SIZE));
  printf("%d\n", binsearch2(150, arr, SIZE));
}
int binsearch(int x, int v[], int n){
  int low, high, mid;
  low = 0;
  high = n - 1;
  while (low <= high && x != v[mid]){
    mid = ( low+high ) / 2;
    if ( x < v[mid] )
      high = mid - 1;
    else if ( x > v[mid] )
      low = mid + 1;
    else
      return mid;
  }
  return -1;
}

int binsearch2(int x, int v[], int n){
  int low, high, mid;
  low = 0;
  high = n - 1;
  while (low <= high && x != v[mid]){
    mid = (low+high) / 2;
    if ( x < v[mid] )
      high = mid - 1;
    else
      low = mid + 1;
  }
  if (x==v[mid]) return mid;
  else return -1;
}
//The "optimized version" of binsearch is a bit slower and more unreadable. I wonder how much faster it would have been in the 70's on a PDP11