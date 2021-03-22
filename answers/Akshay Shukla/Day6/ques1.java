import java.util.*;
class ques1d6
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter candies array in form [n1,n2,n3,..]");
        String s=sc.nextLine();
        s=s.substring(1,s.length()-1);
        String[] arr=s.split(",");
        int m=0;
        for(int i=0;i<arr.length;i++)
        if(m<Integer.valueOf(arr[i]))
        m=Integer.valueOf(arr[i]);
        System.out.println("Enter no. of extra candies");
        int n=sc.nextInt();
        String r[]=new String[arr.length];
        for(int i=0;i<arr.length;i++)
        {
            if(n+(Integer.valueOf(arr[i]))>=m)
            r[i]="True";
            else
            r[i]="False";
        }
        System.out.print("[");
        for(int i=0;i<arr.length;i++)
        System.out.print(r[i]+",");
        System.out.print("]");
    }
}
