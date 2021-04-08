import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class reversequeue {

	public static void main(String[] args) {
		Queue<Integer> q=new LinkedList<>();
		Scanner sc =new Scanner(System.in);
		int n=sc.nextInt();
		int k=sc.nextInt();int arr[]=new int[k];
		for(int i=0;i<n;i++)
		{
			q.add(sc.nextInt());
		}
		for(int i=k-1;i>=0;i--)
		{
			arr[i]=q.poll();
		}
		for(int i=0;i<k;i++)
		{
			System.out.print(arr[i]+" ");
		}
		for(int j=0;j<n-k;j++)
		{
			System.out.print(q.poll()+" ");
		}
		

	}

}
