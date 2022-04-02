import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t > 0) {
            int n = scanner.nextInt();
            int m = scanner.nextInt();
            int ans = n > 0 ? 0 : 1;
            for (int i = n; i <= m; i++) {
                int k = i;
                int cnt = 0;
                while (k > 0) {
                    if (k % 10 == 0) {cnt++;}
                    k /= 10;
                }
                ans += cnt;
            }
            System.out.println(ans);
            t--;
        }
    }
}
