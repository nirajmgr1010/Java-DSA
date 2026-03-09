public class SumofDigit {

    public static int sumOfDigit(int n) {

        // base case
        if (n == 0) {
            return 0;
        }

        // recursive case
        return (n % 10) + sumOfDigit(n / 10);
    }

    public static void main(String[] args) {

        int num = 57367;
        int result = sumOfDigit(num);

        System.out.println("Sum of digits: " + result);
    }
}