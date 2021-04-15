import java.util.*;
public class ArrayPeak
{
    public static void main()
    {
        Scanner sc=  new Scanner (System.in);
        int t=sc.nextInt();
        while(t-->0)
        {
            int n,k;
            n=sc.nextInt();
            k=sc.nextInt();
            if(n%2!=0)
            {
                if(k>n/2)
                {
                    System.out.println(-1);
                }
                else
                {
                    int c=0;
                    int i=1;
                    int ls[]=new int[n+1];
                    for(int x=1;x<=n;x++)
                    {
                        ls[x]=x;
                    }
                    while(c<k)
                    {
                        int a=ls[i];
                        ls[i]=ls[i+1];
                        ls[i+1]=a;                     
                        c++;
                        i+=2;
                    }
                    for(int x=1;x<=n;x++)
                    System.out.print(ls[x]+" ");
                }
            }
            else
            {
                 if(k>((n/2) -1))
                {
                    System.out.println(-1);
                }
                else
                {
                    int c=0;
                    int i=1;
                    int ls[]=new int[n+1];
                    for(int x=1;x<=n;x++)
                    {
                        ls[x]=x;
                    }
                    while(c<k)
                    {
                        int a=ls[i];
                        ls[i]=ls[i+1];
                        ls[i+1]=a;                     
                        c++;
                        i+=2;
                    }
                    for(int x=1;x<=n;x++)
                    System.out.print(ls[x]+" ");
                }
            }
        }
    }
}
