import java.util.Scanner;

public class KadaneAlgorithm {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the size of the array: ");
        int N = sc.nextInt();

        int[] arr = new int[N];

        System.out.println("Enter the elements of the array: ");
        for (int i = 0; i < N; i++) {
            arr[i] = sc.nextInt();
        }

        int maxSum = findMaxSubarraySum(arr);

        System.out.println("Maximum sum of a contiguous subarray is: " + maxSum);
    }

    public static int findMaxSubarraySum(int[] arr) {
        int maxEnding = arr[0];
        int maxSoFar = arr[0];

        for (int i = 1; i < arr.length; i++) {
            maxEnding = Math.max(arr[i], maxEnding + arr[i]);
            maxSoFar = Math.max(maxSoFar, maxEnding);
        }

        return maxSoFar;
    }
}
