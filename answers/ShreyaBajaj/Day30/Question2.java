import java.util.*;
class Lucky_Substring
{
	public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int sum4 = 0, sum7 = 0;
        System.out.println("Enter string");
        String str = sc.nextLine();
        for(int i =0 ; i<str.length(); i++)
        {
            if(str.charAt(i)=='4')
                sum4++;
            if(str.charAt(i)=='7')
                sum7++;
        }

        if(sum4==0 && sum7==0)
            System.out.println(-1);
        else if(sum4>=sum7)
            System.out.println(4);
        else
            System.out.println(7);


    }
}
