import java.util.*;
class ques2d6
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter array in form [n1,n2,n3,..]");
        String st=sc.nextLine();
        st=st.substring(1,st.length()-1);
        String[] a=st.split(",");
        int s=0;
        for(int i=1;i<=a.length;i+=2)
        {
            int m=0,n=i;
            for(int j=1;j<=a.length+1-i;j++)
            {
                String[] ar=Arrays.copyOfRange(a, m, n);
                for(int k=0;k<ar.length;k++)
                s=s+Integer.valueOf(ar[k]);
                m++;n++;
            }
        }
        System.out.println(s);
    }
}
