class shaurya {
    public static void main(String args[]) {
        int x, y, z;
        for (x = 0; x < 4; x++) {
            for (y = 3; y > x; y--) {
                System.out.print("  ");
            }
            for (z = 0; z <= x; z++) {
                System.out.print(" *");
            }
            System.out.println();
        }
    }

}
