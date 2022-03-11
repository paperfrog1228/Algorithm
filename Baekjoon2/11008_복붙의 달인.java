import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        for (int i = 0; i < t; i++) {
            int cnt = 0;
            String s = scanner.next();
            String p = scanner.next();
            int index = 0;
            while (index < s.length()) {
                if (index + p.length() <= s.length() && s.substring(index, index + p.length()).equals(p))
                    index += p.length();
                else index++;
                cnt++;
            }
            System.out.println(cnt);
        }
    }
}
