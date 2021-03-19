import java.util.*;
class ques2d3
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter no. to be checked");
        String n=sc.next();
        int c=0;
        for(int i=0;i<n.length();i++)
        {
            for(int j=i+1;j<n.length();j++)
            {
                if(n.charAt(i)==n.charAt(j))
                {
                    c=1;
                    break;
                }        
            }
            if(c==1)
             break;
        }
        if(c==0)
        System.out.println(n+" is a unique number");
        else
        System.out.println(n+" is not a unique number");
    }
}
