
class Day5q2 
{
    public static boolean primecheck(int num) {
        int i, j = 0;
        for (i = 1; i <= num; i++)
            if (num % i == 0)
                j++;
        if (j == 2)
            return (true);
        else
            return (false);
    }

    public static void main(String args[]) {
        int num=4;
        int x, y ,z = 1, l;
        for (x = 0; x < num; x++) {
            for (y = 0; y <= x; y++) {
                if (primecheck(z))
                    System.out.print("#  ");
                else
                    System.out.print("*  ");
                z++;
            }
            System.out.println();
        }
    }
}
