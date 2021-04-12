import java.util.Scanner;

class ArrayD24
{
    static int Minstep(int inputArray [])
    {
        int Maxvalue = inputArray[0];

        for(int i = 1; i < inputArray.length; i++)
        {
            if(inputArray[i] > Maxvalue)
            {
                Maxvalue = inputArray[i];
            }
        }
        return Maxvalue;
    }
    public static void main (String[] args) 
    { 
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of the array:");
        int n=sc.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter the elements in the  array :");
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        } 
        System.out.println("Output");
        System.out.println(Minstep(arr)); 
    } 
}
 
