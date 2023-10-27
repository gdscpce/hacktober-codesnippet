// JAVA CODE TO FIND SUM OF ALL SUBARRAYS 

import java.util.Scanner;

public class SubarraySum {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the length of the array (N): ");
        int N = scanner.nextInt();

        int[] A = new int[N];
        System.out.println("Enter the elements of the array:");
        for (int i = 0; i < N; i++) {
            A[i] = scanner.nextInt();
        }

        long result = sumOfAllSubarraySums(A);
        System.out.println("Sum of all subarray sums: " + result);
    }

    public static long sumOfAllSubarraySums(int[] A) {
        int N = A.length;
        long sum = 0;

        for (int i = 0; i < N; i++) {
            for (int j = i; j < N; j++) {
                for (int k = i; k <= j; k++) {
                    sum += A[k];
                }
            }
        }

        return sum;
    }
}
