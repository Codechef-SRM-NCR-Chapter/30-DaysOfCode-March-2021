import java.util.*;
class ques1d7
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter array in form [n1,n2,n3,..]");
        String s=sc.nextLine();
        s=s.substring(1,s.length()-1);
        String[] arr=s.split(",");
        int[] ar=new int[arr.length];
        for(int i=0;i<arr.length;i++)
        ar[i]=Integer.valueOf(arr[i]);
        System.out.println("Enter value of a");
        int a=sc.nextInt();
        System.out.println("Enter value of b");
        int b=sc.nextInt();
        System.out.println("Enter value of c");
        int c=sc.nextInt();
        int m=0;
        for(int i=0;i<arr.length-2;i++)
            for(int j=i+1;j<arr.length-1;j++)
                for(int k=j+1;k<arr.length;k++)
                    if(Math.abs(ar[i]-ar[j])<=a && Math.abs(ar[j]-ar[k])<=b && Math.abs(ar[i]-ar[k])<=c)
                        m++;
        System.out.println("No. of good triplets : "+m);
    }
}
