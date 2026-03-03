/*
Qs. Print Factorial of a number n
 n! = n*(n-1) * (n-2)....... *1
 3! = 3*2*1 = 6
 0! = 1

 intution 
 1) Information of what will be n value
 2) work what we will do -> 1) (n-1)!
                            2) n * (n-1)!
                            return;
 3) base case (n==1) return 1;

*/
public class Recursion3 {
    public static int calculateFactorial(int n){
 
        if(n == 1 || n == 0){
            return 1;
        }
        int fact_nm1 = calculateFactorial(n-1);
        int fact_n = n * fact_nm1;
        return fact_n;

    }
    public static void main(String[] args) {
        int n = 5;
       int ans =  calculateFactorial(n);
       System.out.println(ans);
    }
}
