import java.util.*;
class ques1d2
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int x=n,r=0,s=0,c=0,p=1;
        String st= String.valueOf(n);
        int l= st.length();
        while(x>0)
        {
            r=x%10;
            s=s+(int)Math.pow(r,l-c);
            x=x/10;
            c++;
        }
        if(s==n)
        System.out.println("Disarium Number");
        else
        System.out.println("Not a Disarium Number");
    }
}
