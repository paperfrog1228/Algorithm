import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int r = scanner.nextInt();
        int s = scanner.nextInt();
        System.out.println((r*8+s*3)-28);
    }
}
