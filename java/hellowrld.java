import java.util.Scanner;
public class hellowrld{
    public static void main(String[] args) {
        System.out.println("Enter number 1: ");
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        System.out.println("Enter number B: ");
        int b = sc.nextInt();
        int c = a+b;
        System.out.println(c);

    }
}