import java.util.*;
public class RevString
{
    public static void main()
    {
        Scanner sc= new Scanner (System.in);
        String str=sc.nextLine();
        str=str+" ";
        String w="";
        ArrayList<String> a=new ArrayList<>(); 
        for(int i=0;i<str.length();i++)
        {
            if(str.charAt(i)==' ')
            {
                a.add(w);
                w="";
            }
            w=w+str.charAt(i);
        }
        a=rev(a,0,a.size()-1);
        for(int i=0;i<a.size();i++)
        {
            System.out.print(a.get(i)+" ");
        }
    }
    public static ArrayList<String> rev(ArrayList<String> s,int f,int l)
    {
        if(f>=l)
            return s;
        String temp=s.get(f);
        s.set(f,s.get(l));
        s.set(l,temp);
        return rev(s,f+1,l-1);
    }
}
