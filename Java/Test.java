class Test {
  public static int[] NonZeros( int[] A ) {
    // count # nonzero values
      int nonz = 0;
      for (int k=0; k<A.length; k++) if (A[k] != 0) nonz++;

    // allocate and fill new array
      int[] result = new int[nonz];
      int j = 0; // index of next element of new array to fill in
      for (int k=0; k<A.length; k++) {
         if (A[k] != 0) {
            result[j] = A[k];
            j++;
         }
      }
      return result;
  }

  public static void PrintArray( int[] A ) {
    System.out.print("[");
    for (int k=0; k<A.length; k++) {
        System.out.print(A[k]);
        if (k < (A.length - 1)) System.out.print(" ");
    }
    System.out.print("]");
  }

  public static void main(String[] args) {
    int[] A = {0,1,2,3,2};
    System.out.print("passing ");
    PrintArray(A);
    A = NonZeros(A);
    System.out.print(" got back ");
    PrintArray(A);
    System.out.println();

    int[] B = {0,0};
    System.out.print("passing ");
    PrintArray(B);
    A = NonZeros(B);
    System.out.print(" got back ");
    PrintArray(A);
    System.out.println();

    int[] C = {1,0};
    System.out.print("passing ");
    PrintArray(C);
    A = NonZeros(C);
    System.out.print(" got back ");
    PrintArray(A);
    System.out.println();
  }
}