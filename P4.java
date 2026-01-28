import java.util.Scanner;

class P4{
    public static void main(String[] args){
        Scanner myObj = new Scanner(System.in);
        
        System.out.print("Enter the height: ");
        int height = myObj.nextInt();

        for (int x = 0; x < height; x++){
            String pattern = "";
            for (int i = 0; i <= x; i++){
                if ( i % 2 == 0){
                    pattern += "AA";
                } else{
                    pattern += "BB";
                }
            }
            System.out.print(pattern);
            System.out.println();
        }
    myObj.close();
    }
}