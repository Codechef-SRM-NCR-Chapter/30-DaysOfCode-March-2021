import java.util.*;
class ques2d2
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        String st=String.valueOf(n);
        String str="";
        int i,count=0;
        for(i=st.length()-1;i>=0;i--)
        {
            str=str+st.charAt(i);
        }
        int rev= Integer.parseInt(str);
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            count=1;
        }
        for(i=2;i<rev;i++)
        {
            if(rev%i==0)
            count=1;
        }
        if(count!=0)
        System.out.println(n+" is not an Emirp number");
        else
        System.out.println(n+" is an Emirp Number");
    }
}
