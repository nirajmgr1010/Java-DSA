public class ReverseNumber {

    public static void reverseNumber(int digit) {

        // base case
        if (digit == 0) {
            return;
        }

        // print last digit
        System.out.print(digit % 10);

        // recursive call
        reverseNumber(digit / 10);
    }

    public static void main(String[] args) {

        int number = 5736;

        System.out.print("Reversed Number: ");
        reverseNumber(number);
    }
}