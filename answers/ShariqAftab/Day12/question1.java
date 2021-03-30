import java.util.*;
class Valid 
{
  
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter  the string:");
        String str=sc.nextLine();
        char ch[] = str.toCharArray();
        int n = ch.length;
        System.out.println(SubCount(ch, n));

    }
    public static int SubCount(char str[],int n) 
    {
        int r = 0;
        for (int i = 0; i<n; i++) 
        {
            if (str[i] == '1') 
            {
                r++;
                for (int j = i + 1; j< n; j++) 
                {
                    if (str[j] == '1')
                        r++;
                }
            }
        }
        return r;
    }

}
