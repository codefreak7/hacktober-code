import java.io.*;

class Calculator {

    static int add(int a, int b) {
        return a + b;
    }

    static int subtract(int a, int b) {
        return a - b;
    }

    static int multiply(int a, int b) {
        return a * b;
    }

    static int divide(int a, int b) {
        return a / b;
    }

    public static void main(String[] args)throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int firstnum, secondnum, result = 0;
        char choice;
        int flag = 0;

        System.out.print("Enter first number: ");
        firstnum = Integer.parseInt(br.readLine());
        System.out.print("Enter second number: ");
        secondnum = Integer.parseInt(br.readLine());

        System.out.println("Enter + for addition\nEnter - for subtraction\nEnter * for multipliction\nEnter / for division");
        System.out.print("Enter your choice: ");
        choice = br.readLine().trim().charAt(0);

        if(choice == '+') 
            result = add(firstnum, secondnum);
        else if(choice == '-')
            result = subtract(firstnum, secondnum);
        else if(choice == '*')
            result = multiply(firstnum, secondnum);
        else if(choice == '/')
            result = divide(firstnum, secondnum);
        else {
            flag = 1;
            System.out.println("Wrong Choice!");
        }

        if(flag == 0) {
            System.out.println(firstnum + " " + choice + " " + secondnum + " = " + result + "\nThank You!");
        }

    }
}