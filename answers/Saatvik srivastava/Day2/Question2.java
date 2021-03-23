import java.util.*;
    class Question2
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int num=sc.nextInt();
        String st=String.valueOf(num);
        String str="";
        int i,count=0;
        for(i=st.length()-1;i>=0;i--)
        {
            str=str+st.charAt(i);
        }
        int rev= Integer.parseInt(str);
        for(i=2;i<num;i++)
        {
            if(num%i==0)
            count=1;
        }
        for(i=2;i<rev;i++)
        {
            if(rev%i==0)
            count=1;
        }
        if(count!=0)
        System.out.println(num+" IS NOT A EMIRP NUMBER");
        else
        System.out.println(num+" IS A EMIRP NUMBER");
    }
}
