public class ReverseArr {
    public static void ReverseArr(int arr[]){
        int left = arr[0];
        int right = arr.length-1;
    
        while (left < right) {
             int temp = arr[right];
             arr[left] = arr[right];
             arr[right] = temp;

             left++;
             right--;
        }
        
        for(int i=0; i<arr.length; i++){
            System.out.println(arr[i]);
        }
    }
    public static void main(String[] args) {
        int arr[] = {10,4,3,5,8,6};
        ReverseArr(arr);
        // System.out.println(arr.length);
    }
}
