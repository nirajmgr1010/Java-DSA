
public class Selectionshort {
    public static void main(String[] args) {
        int nums[] = {6,5,2,8,9,4};
        int size = nums.length;
        int temp = 0;
        int minIndex;
        System.out.println("Before Shorting...");
        for(int num : nums){
            System.out.println(num+" ");
        }
        for(int i=0; i<size-1; i++){
            minIndex = i;
            for(int j = i+1; j<size; j++){
                if(nums[minIndex]>nums[j]){
                     minIndex = j;
                }
            }
            temp = nums[minIndex];
            nums[minIndex] = nums[i];
            nums[i] = temp;
            System.out.println("\nPass " + (i + 1) + ": ");
            for (int num : nums) {
                System.out.print(num + " ");
            }
        }
        System.out.println();
        System.out.println("After shorting...");
        for(int num: nums){
            System.out.print(num);
        }
    }
}
