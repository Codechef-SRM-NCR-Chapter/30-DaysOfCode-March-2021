import java.util.*;
class Day3q1

{
    public static void main(String args[])
    {
        Scanner sc =new Scanner(System.in);
        System.out.print("Enter the number of terms ");
        int n=sc.nextInt();
        int sum=0;
        int s=0,i;
        for(i=1;i<=n;i++)
        {
            s=(s*10)+i;
            sum=sum+s;
            if(i==n){
                System.out.print(s);
                break;
            }
            System.out.print(s+" + ");
        }
        System.out.println();
        System.out.print("Sum = "+sum);
    }
}
            
