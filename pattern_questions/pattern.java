public class pattern {
    public static void main(String args[]) {

        int row = 1;
        while (row <= 5)
        {
            int col = 1;
    
            while (col <= row)
            {
               System.out.print("*"+" ");
                col++;
            }
            System.out.println();
            row++;
        }
    }
}
