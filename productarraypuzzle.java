import java.util.*;
public class Product {
    public static int[] productArray(int A[]) {
        int n = A.length;
        int[] leftProducts = new int[n];
        int[] rightProducts = new int[n];
        int[] result = new int[n];
        int leftProduct = 1;
        for (int i = 0; i < n; i++) {
            leftProducts[i] = leftProduct;
            leftProduct *= A[i];
        }
        int rightProduct = 1;
        for (int i = n - 1; i >= 0; i--) {
            rightProducts[i] = rightProduct;
            rightProduct *= A[i];
        }
        for (int i = 0; i < n; i++) {
            result[i] = leftProducts[i] * rightProducts[i];
        }
        return result;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number of elements");
        int n = sc.nextInt();
        int A[] = new int[n];
        System.out.println("Enter the elements");
        for (int i = 0; i < n; i++) {
            A[i] = scanner.nextInt();
        }
        int[] productArray = productArray(A);
        System.out.println("Product array without division:");
        System.out.println(Arrays.toString(productArray));
    }
}
