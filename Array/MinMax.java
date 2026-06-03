import java.util.ArrayList;

public class MinMax {
    public static ArrayList<Integer> getMinMax(int[] arr){
        ArrayList<Integer> list = new ArrayList<>();
        
        int min = arr[0];
        int max = arr[0];
        for(int i=0; i<arr.length; i++){
             if(arr[i] < min){
               min = arr[i];
             }
             if(arr[i] > max){
                max = arr[i];
             }
        }
        list.add(min);
        list.add(max);

        return list;
    } 

    public static void main(String[] args) {
        int arr[] = {10,4,3,5,8,6};
        System.out.println(getMinMax(arr));
    }
}
