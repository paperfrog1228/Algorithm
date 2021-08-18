import java.util.*;
class Main {
    static int n,cnt,now=1;
    public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);
    n=scan.nextInt();
    while(true){
        cnt+=(int)(Math.log10(now)+1);
        if(cnt>=n) break;
        now++;
    }
    String s=Integer.toString(now);
    System.out.println(s.charAt(s.length()-(cnt-n+1)));
  }
}