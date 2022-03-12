import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int k = scanner.nextInt();
        for (int i = 0; i < k; i++) {
            int cnt = 0;
            int p=scanner.nextInt();
            int m=scanner.nextInt();
            int[] a=new int[530];
            for(int j=1;j<=p;j++){
                int b=scanner.nextInt();
                if(a[b]>0) {
                    cnt++;
                }
                a[b]++;
            }
            System.out.println(cnt);
        }
    }
}
