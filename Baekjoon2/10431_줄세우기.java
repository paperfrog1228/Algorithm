import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int p = scanner.nextInt();

      for(int i=1;i<=p;i++){
        int a=0;
        int[] t= new int[21];
        for(int j=0;j<21;j++){
          t[j] = scanner.nextInt();
        }
        for(int j=1;j<21;j++){
          for(int k=1;k<j;k++){
            if(t[j]<t[k]){
              a++;
            }
          }
        }
        System.out.println(t[0]+" "+a);
      }
    }
}
