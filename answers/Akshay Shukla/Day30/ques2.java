import java.util.*;
class ques2d30
{
    static boolean lucky(String s)
    {
        for(int i=0;i<s.length();i++)
        if(s.charAt(i)!='4' && s.charAt(i)!='7')
        return false;
        return true;
    }
    static String ss(String s)
    {
        ArrayList<String> r=new ArrayList<String>();
        ArrayList<String> a=new ArrayList<String>();
        ArrayList<Integer> c=new ArrayList<Integer>();
        for(int i=0;i<=s.length();i++)
        {
            for(int j=i+1;j<=s.length();j++)
            {
                String sub=s.substring(i,j);
                if(lucky(sub))
                {
                    if(r.isEmpty())
                    {
                        r.add(sub);
                        c.add(1);
                    }
                    else if(r.contains(sub))
                    {
                        c.set((r.indexOf(sub)),(c.get(r.indexOf(sub)))+1);
                    }
                    else
                    {
                        r.add(sub);
                        c.add(1);
                    }
                }
            }
        }
        if(r.isEmpty())
        return "-1";
        int max=Collections.max(c);
        while(!(c.indexOf(max)==-1))
        {
            a.add(r.get(c.indexOf(max)));
            r.remove(c.indexOf(max));
            c.remove(c.indexOf(max));
        }
        String m=a.get(0);
        for(int i=1;i<a.size();i++)
        {
            if(m.compareTo(a.get(i))>0)
            m=a.get(i);
        }
        return m;
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("INPUT : ");
        String s=sc.next();
        System.out.println("OUTPUT : ");
        System.out.println(ss(s));
    }
}
