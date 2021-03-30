import java.util.*;
class ques2d13
{
    public static void rev(int a[],int i)
    {
        if(i==a.length/2)
        return;
        else
        {
            int temp=a[i];
            a[i]=a[a.length-1-i];
            a[a.length-1-i]=temp;
            rev(a,i+1);
        }
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter array in form [n1,n2,n3,..]");
        String s=sc.nextLine();
        s=s.substring(1,s.length()-1);
        String[] arr=s.split(",");
        int[] ar=new int[arr.length];
        int[] ch=new int[arr.length];
        for(int i=0;i<arr.length;i++)
        {
            ar[i]=Integer.valueOf(arr[i]);
            ch[i]=Integer.valueOf(arr[i]);
        }
        rev(ar,0);
        int k=0;
        for(int i=0;i<arr.length;i++)
        {
            if(ar[i]==ch[i])
            continue;
            else
            {
                k=1;
                break;
            }
        }
        if(k==0)
        System.out.println("PALINDEOME");
        else
        System.out.println("NOT PALINDEOME");
    }
}
