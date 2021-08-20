import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        int t,n;
        double d,v,f,c;
        Scanner scan=new Scanner(System.in);
        t= scan.nextInt();
        while(t>0){
            int ans=0;
            n=scan.nextInt();
            d=scan.nextDouble();
            for(int i=1;i<=n;i++){
                v=scan.nextDouble();
                f=scan.nextDouble();
                c=scan.nextDouble();
                if((f/c)*v>=d) ans++;
            }
            System.out.println(ans);
            t--;
        }
    }
}