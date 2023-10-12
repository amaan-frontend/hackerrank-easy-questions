#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int value;
  int index;
} Element;

int compare(const void *a, const void *b) {
  const Element *ea = (const Element *)a;
  const Element *eb = (const Element *)b;

  return ea->value - eb->value;
}

int main() {
  // Get the number of elements in the array.
  int n;
  scanf("%d", &n);

  // Create an array to store the elements.
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  // Create an array to store the elements sorted by value.
  Element elements[n];
  for (int i = 0; i < n; i++) {
    elements[i].value = arr[i];
    elements[i].index = i;
  }

  // Sort the elements array by value.
  qsort(elements, n, sizeof(Element), compare);

  // Find the smallest absolute difference between two elements in the array.
  int minDiff = abs(elements[0].value - elements[1].value);

  // Create an array to store the pairs of elements with the smallest absolute difference.
  int closestPairs[n];
  int numClosestPairs = 0;

  // Iterate over the elements array and find all pairs of elements with the smallest absolute difference.
  for (int i = 0; i < n - 1; i++) {
    int diff = abs(elements[i].value - elements[i + 1].value);
    if (diff == minDiff) {
      closestPairs[numClosestPairs++] = elements[i].index;
      closestPairs[numClosestPairs++] = elements[i + 1].index;
    }
  }

  // Print the pairs of elements with the smallest absolute difference.
  for (int i = 0; i < numClosestPairs; i += 2) {
    printf("%d %d\n", arr[closestPairs[i]], arr[closestPairs[i + 1]]);
  }

  return 0;
}


