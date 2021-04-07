import java.util.*;
class ques2d21
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter length of array n : ");
        int n=sc.nextInt();
        int ar[]=new int[n];
        System.out.println("Enter array elements : ");
        for(int i=0;i<n;i++)
        ar[i]=sc.nextInt();
        Arrays.sort(ar);
        String s="",s1="";
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            s=s+String.valueOf(ar[i]);
            else
            s1=s1+String.valueOf(ar[i]);
        }
        System.out.println("OUTPUT : "+(Integer.valueOf(s)+Integer.valueOf(s1)));
    }
}
