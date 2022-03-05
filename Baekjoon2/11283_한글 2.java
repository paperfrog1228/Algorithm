import java.util.*;
class Main {
    public static void main (String[] args) {
        Scanner scanner = new Scanner(System.in);
        String str = scanner.nextLine();
        System.out.println(str.codePointAt(0)-44031);
        scanner.close();
    }
}