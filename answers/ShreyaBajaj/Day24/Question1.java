import java.util.*;
class arrange_permutation
{
	static int c=0;
	static void permutation(String str, String ans)
    {
		if (str.length() == 0)
        {
            System.out.println(ans + " ");
            c++;
            return;
        }

        for (int i = 0; i < str.length(); i++)
        {
			char ch = str.charAt(i);
			String r = str.substring(0, i) + str.substring(i + 1);
			permutation(r, ans + ch);

        }
    }
    public static void main(String[] args)
    {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter STRING");
        String s = sc.nextLine();
        System.out.println("OUTPUT");
        permutation(s, "");
        System.out.println("no. of strings: "+c);
    }
}
