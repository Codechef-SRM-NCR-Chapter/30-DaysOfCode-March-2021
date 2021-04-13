public class PERMUTE
{
    int count=0;
    public static void main(String[] args)
    {
        String str = "ABC";
        int n = str.length();
        permute(str, 0, n-1);
    }
    
    public static String swap(String a, int i, int j)
    {
        char temp;
        char[] charArray = a.toCharArray();
        temp = charArray[i] ;
        charArray[i] = charArray[j];
        charArray[j] = temp;
        return String.valueOf(charArray);
    }
  public static void permute(String str, int strt, int end)
    {
        if (strt == end)
            System.out.println(str);
        else
        {
            for (int i = strt; i <= end; i++)
            {
                str = swap(str,strt,i);
                permute(str, strt+1, end);
                str = swap(str,strt,i);
            }
        }
    }
 
}
