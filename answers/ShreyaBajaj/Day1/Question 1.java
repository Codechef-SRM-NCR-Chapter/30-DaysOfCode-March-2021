import java.io.*;
class palindromeanagram
{
    static boolean anagram(String str)
    {
        int[] arr = new int[256];
        int i;
        for(i=0; i<str.length(); i++)
        {
            arr[str.charAt(i)]++;
        }
        int odd,even;
        odd = even =0;
        for(i=0; i<256; i++)
        {
            if(arr[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        boolean result;
        if(odd > 1)
            return false;
        return true;
    }
    public static void main(String args[])
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String str;
        System.out.println("Enter the string");
        try
        {
            str = br.readLine();
        }
        catch (IOException e)
        {
            System.out.println("An I/O error occurred");
            return;
        }
        boolean result = anagram(str);
        if(result)
            System.out.println("Palindrome anagrams exist");
        else
            System.out.println("No palindrome anagrams exists");
    }
}
