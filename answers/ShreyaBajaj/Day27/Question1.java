import java.util.*;
class RotateArray
{
    void rightRotate(int arr[], int d, int n)
    {
        for (int i = 0; i < d; i++)
            rightRotatebyOne(arr, n);
    }

    void rightRotatebyOne(int arr[], int n)
    {
        int i, temp;
        temp = arr[n-1];
        for (i = n-1; i > 0; i--)
            arr[i] = arr[i - 1];
        arr[0] = temp;
    }
    void printquerie(int arr[], int x)
    {
            System.out.println(arr[x] );
    }
    void printArray(int arr[], int n)
	    {
	        for (int i = 0; i < n; i++)
	            System.out.print(arr[i] + " ");
	    }

    public static void main(String[] args)
    {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter length of array, rotation count and no. of queries  ");
		int l=sc.nextInt();
		int n=sc.nextInt();
        int q=sc.nextInt();
        RotateArray rotate = new RotateArray();
        int arr[] = new int[l];
        System.out.println("enter elements in array");
        for (int i = 0; i < l; i++)
        arr[i]=sc.nextInt();
        rotate.rightRotate(arr,n , l);
         System.out.println("resultant array");
        rotate.printArray(arr, l);
         System.out.println();
		for (int i = 0; i < q; i++)
		{
			System.out.println("enter querie");
			int x=sc.nextInt();
            rotate.printquerie(arr, x);
		}
    }
}
