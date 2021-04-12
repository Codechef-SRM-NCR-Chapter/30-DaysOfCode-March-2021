import java.util.*;
class shaurya {
    public static void main(String args[] )
    {
        Scanner sc=new Scanner(System.in);
        int n = sc.nextInt();
        while(n>0) 
        {
            int larger;
            int smaller;
            int x=sc.nextInt();
            int y = sc.nextInt();
            if(x>y)
            {
                larger=x;
                smaller=y;
            }
            else
            {
                larger=y;
                smaller=x;
            }
            System.out.println(smaller+(larger-smaller));
            n--;
        }
    }
}
