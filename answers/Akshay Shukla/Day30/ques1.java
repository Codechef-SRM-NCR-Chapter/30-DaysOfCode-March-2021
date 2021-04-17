import java.util.*;
class ques1d30
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("INPUT : ");
        int n=sc.nextInt();
        int m=sc.nextInt();
        String[] l1=new String[m];
        String[] l2=new String[m];
        ArrayList<String> comp=new ArrayList<String>();
        for(int i=0;i<m;i++)
        {
            l1[i]=sc.next();
            l2[i]=sc.next();
            if(l1[i].length()<=l2[i].length())
            comp.add(l1[i]);
            else
            comp.add(l2[i]);
        }
        sc.nextLine();
        String[] str=(sc.nextLine()).split(" ");
        System.out.println("OUTPUT : ");
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(str[i].equals(l1[j]))
                {
                    System.out.print(comp.get(j)+" ");
                    break;
                }
            }
        }
    }
}
