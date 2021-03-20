import java.util.*;
class ques1d4
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the no.");
        int n= sc.nextInt();
        String str="";
        for(int i=2;i<=n;)
        {
            if(n%i==0)
            {
                n=n/i;
                str=str+i+",";
            }
            else
            i++;
        }
        System.out.println(str.substring(0,str.length()-1));
    }
}
