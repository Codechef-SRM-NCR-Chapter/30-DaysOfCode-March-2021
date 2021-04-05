import java.util.*;

class ARRAYSorting{

    public static void main (String[] args) {

        Scanner s = new Scanner(System.in);

        System.out.println("Enter the size of the Array");

        int n = s.nextInt();

        int[] num = new int[n];

        int[] ones = new int[n];

        int max = -1;

        System.out.println("Enter the elements of the Array");

        for(int i=0;i<n;i++){

            num[i] = s.nextInt();

            ones[i] = countSetBits(num[i]);

            if(ones[i]>max){

                max = ones[i];

            }

        }

        ArrayList<ArrayList<Integer>> arr = new ArrayList<>();

        for(int i=0;i<=max;i++){

            arr.add(new ArrayList<>());

        }

        for(int i=0;i<n;i++){

            int index = ones[i];

            arr.get(index).add(num[i]);

        }

        for(int i=max;i>=0;i--){

            //Collections.sort(arr.get(i));

            for(int j=0;j<arr.get(i).size();j++){

                System.out.print(arr.get(i).get(j)+" ");

            }

        }

    }

    public static int countSetBits(int n){

        int count = 0;

        while(n>0){

            n &= (n-1);

            count++;

        }

        return count;

        //15 7 5 3 9 6 2 4 32

    }

}
