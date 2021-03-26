import java.util.*;
class shaurya
{
    public static void main(String args[])
    {
    Scanner sc=new Scanner(System.in);
    System.out.println("enter the string ");
    String s=sc.nextLine();
    s=s.toUpperCase();
    int[] alpha=new int[26];
    int x,y,z=0;
    char ch,ch1;
    for(x=0;x<26;x++)
    {
        alpha[x]=0;
    }
    for(x=0;x<26;x=x+1)
    {
        ch=(char)(x+65);
        //System.out.println(ch);
        for(y=0;y<s.length();y++)
        {
            ch1=s.charAt(y);
            if(ch==ch1)
            {
            z++;
            }
        }
        alpha[x]=z;
        z=0;
    }
    boolean flag=true;
    for(x=0;x<26;x++)
    {
        if(alpha[x]==0)
        flag=false;
    }
    
    if(flag==true)
    System.out.println("pangram exists");
    else
    System.out.println("pangram doesn'texist");
    }
}
