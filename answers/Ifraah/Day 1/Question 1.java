import java.util.Scanner;
class Sequence
{
    public static void main(String[] args){

        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();

        int i, j;

        for(i=1; i<=n; i++){
              j = i * (i*i+2);
             System.out.print(" "+j);
           }
     }
}
