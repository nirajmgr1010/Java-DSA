
public class RemoveDuplicatesortedarr{
    public static int removeDuplicates(int[] nums) {
   int k = 1;
    for(int i=1; i<nums.length-1; i++){
        if(nums[i] != nums[i-1]){
            k++;
        }
    }
     
     return k;
    }
    public static void main(String [] args){
    int nums[] = new int[]{0,0,1,1,1,2,2,3,3,4};
    int expectedNums[] = new int[]{0,1,2,3,4};

    int k = removeDuplicates(nums);
    assert k == expectedNums.length;
    for(int i=0; i<k; i++){
        assert nums[i] == expectedNums[i];
    }

    /*
        assert is used to check whether a condition is true while testing a program.
        If the condition is false, Java throws an AssertionError and stops the program.
        It is mainly used for debugging and verifying that your logic works correctly.

        assert condition;
        If condition = true → program continues
        If condition = false → AssertionError

        int x = 10;
        assert x > 5;
    */
    }
}