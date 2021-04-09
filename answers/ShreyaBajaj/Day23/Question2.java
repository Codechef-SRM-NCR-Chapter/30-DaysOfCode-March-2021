import java.util.*;
class good_number
{
	 static int arr[]=new int[1000];
	 static int front, rear,size;

	  good_number()
	  {
		  size=10000;
	    front = -1;
	    rear = -1;
	  }

	  static boolean isFull()
	  {
	    if (front == 0 && rear == size - 1)
	    {
	      return true;
	    }
	    return false;
	  }

	  static boolean isEmpty()
	  {
	    if (front == -1)
	      return true;
	    else
	      return false;
	  }

	  static void add(int element)
	  {
	    if (isFull())
	    {
	      System.out.println("Queue is full");
	    }
	    else
	    {
	      if (front == -1)
	      {
	        front = 0;
	      }
	      rear++;
	      arr[rear] = element;
	      System.out.println("Insert " + element);
	    }
	  }
	  static void display()
	  {
	    int i;
	    if (isEmpty())
	    {
	      System.out.println("Empty Queue");
	    }
	    else
	    {
	      for (i = front; i <= rear; i++)
	        System.out.print(arr[i] + "  ");
		}
	  }

	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter no. of test cases");
		int T=sc.nextInt();
		int arr[]=new int[T];
		System.out.println("Enter numbers");
		for(int i=0;i<T;i++)
		{
			arr[i]=sc.nextInt();
		}
		int c=0,k=0;
		for(int i=1;k<=arr[c];i++)
		{
			int b=i;
			while(i!=0)
			{
				int a=i%10;
				if(a!=1||a!=2)
				continue;
				i=i/10;
			}
			add(b);
			k++;
			c++;
		}
		display();
	}
}
