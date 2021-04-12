import java.util.*;
class shaurya
{
    public static int fact(int n)
    {
        int x,p=1;
        for(x=n;x>=1;x--)
        p=p*x;
        return p;
    }
    public static String swap(String a, int i, int j)
    {
        char temp;
        char[] charArray = a.toCharArray();
        temp = charArray[i] ;
        charArray[i] = charArray[j];
        charArray[j] = temp;
        return String.valueOf(charArray);
    }
    // public static int combination(int n)
    // {
    //     int numerator=fact(n);
    //     int den1=fact(n-2);
    //     int den2=fact(2);
    //     int ret=(numerator)/(den1*den2);
    //     return ret;
    // }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the string");
        String s=sc.nextLine();
        int x,y,z=0,a,b;
        String[] arr=new String[fact(s.length())];
        arr[0]=s;
        for(x=(s.length()-1);x>=0;x--)
        {
            for(y=(s.length()-1);y>0;y--)
            {
                a=y-1;
                b=y;
                if(a!=b)
                {
                    s=swap(s, a, b);
                    arr[z]=s;
                    // System.out.println(s);
                    z++;
                }
            }
        }
        
        for (int i = 0; i < arr.length;i++) 
        {
            for (int j = i + 1; j < arr.length; j++) 
            {
                if (arr[i].compareTo(arr[j])>0) 
                {
                    String temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        for(x=0;x<arr.length;x++)
        System.out.println(arr[x]);
    }
}
