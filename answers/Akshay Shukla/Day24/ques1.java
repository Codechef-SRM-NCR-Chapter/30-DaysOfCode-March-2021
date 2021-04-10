import java.util.*;
class ques1d24
{
    static void comb(ArrayList<String> comb,String s,String str)
    {
        if(s.length()==0)
        {
            comb.add(str);
            return;
        }
        for(int i=0;i<s.length();i++)
        {
            char ch=s.charAt(i);
            String s1=s.substring(0,i)+s.substring(i+1);
            comb(comb,s1,str+ch);
        }
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter String : ");
        String s=sc.nextLine();
        char[] ch =s.toCharArray();
        Arrays.sort(ch);
        s=String.valueOf(ch);
        ArrayList<String> comb=new ArrayList<String>();
        comb(comb,s,"");
        System.out.println(comb.size());
        for(int i=0;i<comb.size();i++)
        System.out.println(comb.get(i));
    }
}
