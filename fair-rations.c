#include <stdio.h>

int fairRations(int B[], int N) {
  // Check if the total number of loaves is odd. If so, it is not possible to distribute the loaves fairly.
  int totalLoaves = 0;
  for (int i = 0; i < N; i++) {
    totalLoaves += B[i];
  }
  if (totalLoaves % 2 != 0) {
    return "NO";
  }

  // Initialize the number of loaves that have been distributed.
  int loavesDistributed = 0;

  // Iterate through the people in the line.
  for (int i = 0; i < N; i++) {
    // If the current person has an odd number of loaves, give them a loaf and their neighbor a loaf.
    if (B[i] % 2 != 0) {
      loavesDistributed += 2;
      B[i]++;
      B[(i + 1) % N]++;
    }
  }

  // Return the number of loaves that have been distributed.
  return loavesDistributed;
}

int main() {
  int N;
  scanf("%d", &N);
  int B[N];
  for (int i = 0; i < N; i++) {
    scanf("%d", &B[i]);
  }

  printf("%s\n", fairRations(B, N));
  return 0;
}

