import java.util.*;
class pattern2
{
	 public static void main(String args[])
	 {
	      int n,i,j,c=1,k,count=0;
          Scanner sc = new Scanner(System.in);
          System.out.println("Enter number of rows");
          n = sc.nextInt();
          for(i=0;i<n;i++)
          {
			  for(j=0;j<=i;j++)
			  {
				  count=0;
				  for(k=1;k<=c;k++)
				  {
					  if(c%k==0)
					  count++;
				  }
				  c++;
				  if(count==2)
				  System.out.print("# ");
				  else
				  System.out.print("* ");
			  }
		       System.out.println();
		  }
	  }
  }
