import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        while (n != 0 || m != 0) {
            int[] array = new int[n];
            for (int j = 0; j < n; j++) {
                array[j] = sc.nextInt();
            }
            for (int k = 0; k < n - 1; k++) {
                int smallest = k;
                for (int l = k + 1; l < n; l++) {
                    if (array[l] % m < array[smallest] % m) {
                        smallest = l;
                    }
                    else if (array[l] % m == array[smallest] % m) {
                        if (array[l] % 2 != 0 && array[smallest] % 2 != 0) {
                            if (array[l] > array[smallest]) {
                                smallest = l;
                            }
                        }
                        else if (array[l] % 2 == 0 && array[smallest] % 2 == 0) {
                            if (array[l] < array[smallest]) {
                                smallest = l;
                            }
                        }
                        else if (array[l] % 2 != 0 && array[smallest] % 2 == 0) {
                            smallest = l;
                        }
                    }
                }
                int temp = array[k];
                array[k] = array[smallest];
                array[smallest] = temp;
            }
            System.out.printf("%d %d\n", n, m);
            for (int p = 0; p < n; p++) {
                System.out.printf("%d\n", array[p]);
            }
            n = sc.nextInt();
            m = sc.nextInt();
        }
        System.out.println("0 0");
    }
}
