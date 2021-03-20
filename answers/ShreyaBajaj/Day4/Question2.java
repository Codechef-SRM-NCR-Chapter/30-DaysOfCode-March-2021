import java.util.*;
class pattern
{
	 public static void main(String args[])
	 {
	      int n,i,j,c=1;
              Scanner sc = new Scanner(System.in);
              System.out.println("Enter number of rows");
              n = sc.nextInt();
              for(i=0;i<n;i++)
              {
			  for(j=0;j<=i;j++)
			  {
				  System.out.print((c++)+" ");
			  }
		          System.out.println();
	      }
	  }
  }
