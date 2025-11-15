
public class linearSearch{
    public static void main(String [] args){
        int nums[] = {5,7,9,11,13};
        int target = 11;

        // int result = linearSearch(nums,target);
        int result = Binearsearch(nums, target,0,nums.length-1);

        if(result != -1)
        System.out.println("Element found at index: "+result);
        else 
        System.out.println("Element is not found at index");
    } 
    public static int linearSearch(int[] nums,int target){
        int steps = 0;
      for(int i=0; i<nums.length; i++){
        steps++;
        if(nums[i] == target){
            System.out.println("Steps taken by Linear : "+steps);
            return i;
        }
      }
         return -1;
    }

    public static int Binearsearch(int[] nums, int target,int left,int right){
        // int left = 0;//3
        // int right = nums.length - 1;//4
        //Using Recursive method
        if(left<=right){
            int mid = (left+right)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid]<target)
              return Binearsearch(nums, target, mid+1, right);
            else
            return Binearsearch(nums, target, left, mid-1);
        }
       
    //    while(left<=right){
    //     steps++;
    //     int mid = (left + right) / 2; //3
    //     if(nums[mid] == target){
    //         System.out.println("Steps taken by binarySearch: "+steps);
    //         return mid;
    //     }
    //     else if(nums[mid] < target){
    //         left = mid + 1;
    //     }
    //     else{
    //         right = mid - 1;
    //     }
    //    }
      return -1;
    }
}