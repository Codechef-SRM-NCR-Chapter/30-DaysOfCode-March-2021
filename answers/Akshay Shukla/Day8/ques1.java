import java.util.*;
class ques1d8
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter array in form [n1,n2,n3,..]");
        String s=sc.nextLine();
        s=s.substring(1,s.length()-1);
        String[] arr=s.split(",");
        int[] n=new int[arr.length];
        for(int i=0;i<arr.length;i++)
        n[i]=Integer.valueOf(arr[i]);
        int sum=0;
        for(int i=0;i<n.length;i++)
        {
            int m=0;
            for(int j=0;j<n.length;j++)
            {
                if(n[i]==n[j])
                    m++;
            }
            if(m<2)
            sum=sum+n[i];
        }
        System.out.println(sum);
    }
}
