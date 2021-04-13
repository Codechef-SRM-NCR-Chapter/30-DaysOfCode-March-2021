import java.util.*;
class ques2d26
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter size of array : ");
        int n=sc.nextInt();
        System.out.println("Enter elements of array : ");
        int a[]=new int[n];        
        for(int i=0;i<n;i++)
            a[i]=sc.nextInt();
        int c=0;
        for(int i=1;i<n;i++)
        {
            while(a[i]<a[i-1])
            {
                a[i]+=1;
                c+=1;
            }
        }
        System.out.println("OUTPUT : "+c);
    }
}
