
public class SumofPower{
    public static int PowCal(int n, int x){
        if(x==0){
            return 1;
        }
        return n * PowCal(n, x-1);
    }
public static void main(String [] args){
      int sum = PowCal(2,5);
      System.out.println(sum);
}
}